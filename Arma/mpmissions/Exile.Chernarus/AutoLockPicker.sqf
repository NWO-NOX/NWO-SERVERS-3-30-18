LockpickLandVehicles 			= false;
LockpickAir 					= false;
LockpickShip 					= false;
LockpickDoors 					= false;
LockpickSafes 					= true;
LockpickDistance				= 2.5;
SuccessChance  = ((count allPlayers*0.6)max 25);
ElectrocuteChance 				= 30;
InflictDamage 					= true;
MinimumDamage 					= 100;
MaximumDamage 					= 100;
StunTime 						= 15;
MaterialRequired1				= 'Exile_Item_Laptop';
MaterialRequired1Count			= 1;
MaterialRequired2				= 'Exile_Item_ExtensionCord';
MaterialRequired2Count			= 10;
_MinimumPlayers 				= 5;
AllowLockPicksNear				= true;
UnlockableItems = ["Land_Stone_Gate_F"];
SafeToALP = true;
LockPickableItems = [];
[player] call AutoLockPicker_Actions;
if(LockpickLandVehicles) then
{
	LockPickableItems = LockPickableItems + ["LandVehicle"];
};
if(LockpickAir) then
{
	LockPickableItems = LockPickableItems + ["Air"];
};
if(LockpickShip) then
{
	LockPickableItems = LockPickableItems + ["Ship"];
};
if(LockpickDoors) then
{
	LockPickableItems = LockPickableItems + UnlockableItems;
};
if(LockpickSafes) then
{
	LockPickableItems = LockPickableItems + ["Exile_Container_Safe","Land_CargoBox_V1_F"];
};
AutoLockPicker_MatsCheck =
{
	_charge1 = _this select 0;
	_charge2 = _this select 1;
	_unit = _this select 2;
	_hasIt1 = _charge1 in (magazines _unit);
	_hasIt1Count = {_x == _charge1} count magazines player;
	_hasIt2 = _charge2 in (magazines _unit);
	_hasIt2Count = {_x == _charge2} count magazines player;
	_hasEnough = false;
	if(_hasIt1Count >= MaterialRequired1Count && _hasIt2Count >= MaterialRequired2Count) then
	{
		_hasEnough = true;
	};
	_CanPlace = false;
	_nearALP = nearestObjects [_unit,["Land_PortableLongRangeRadio_F"],LockpickDistance];
	if(AllowLockPicksNear || (count _nearALP == 0 && !AllowLockPicksNear)) then
	{
		_CanPlace = true;
	};
	_target = cursorTarget;
	_LockPickable = false;
	if ((typeOf cursorTarget) in LockPickableItems) then
	{
		_LockPickable = true;
	}
	else
	{
	    if  (_target isKindOf "LandVehicle" && LockpickLandVehicles) then
	    {
			_LockPickable = true;
		};
	    if  (_target isKindOf "Air" && LockpickAir) then
	    {
			_LockPickable = true;
		};
	    if  (_target isKindOf "Ship" && LockpickShip) then
	    {
			_LockPickable = true;
		};
	};
	_locked = 0;
	_locked =  _target getVariable "ExileIsLocked";
	_nearVehs = false;
	if (_LockPickable && _unit distance _target < LockpickDistance) then
	{
		_nearVehs = true;
	};
	_return = (_hasEnough && _nearVehs && alive _unit && SafeToALP && _CanPlace && _locked == -1);
	_return
};
AutoLockPicker_Countdown = { [ format["<t size='0.70'>%1</t>",_this], 0,1,5,0,0,301] spawn bis_fnc_dynamicText; };
AutoLockPicker_Activate =
{
	_unit = _this select 0;
	_lockpicks = _unit getVariable ["lockpicks",[]];
	{
		if(alive _x && SafeToALP) then
		{
			_time = 90;
			_difference  = (count allPlayers);
			_time =  _time - _difference;
			_attemptFinished = false;
			_nearVehicle = (nearestObjects [_x,LockPickableItems,LockpickDistance]) select 0;
			player playActionNow "medicStart";
			removeAllActions player;
			while {alive player and (player distance _nearVehicle) < LockpickDistance and (_time > 0) and !_attemptFinished} do
			{
				if!(["medic",animationState player] call BIS_fnc_inString) then
				{
					player playActionNow "medicStart";
				};
				(format["time remaining %1 sec", _time] ) call AutoLockPicker_Countdown;
				if (_time <= 1) then { ("") call AutoLockPicker_Countdown;
				_attemptFinished = true;				
			};
				_time = _time - 1;
				if(_time > 1.1) then { uiSleep 1; };
			};
			("") call AutoLockPicker_Countdown;
			[player] call AutoLockPicker_Actions;
			_chance = Ceil random 100;
			player playActionNow "medicstop";
			disableUserInput false;
			player enableSimulation true;
			if((_chance <= SuccessChance) and (alive player)) then{
				_nearVehicle = (nearestObjects [_x,LockPickableItems,LockpickDistance]) select 0;
				deleteVehicle _x;
				_location = mapGridPosition player;
				_playerUID = getPlayerUID player;
				ALPUNLOCK = [_nearVehicle,_location,player,_playerUID];
				uiSleep 0.2;
				publicVariableServer "ALPUNLOCK";
				uiSleep 0.2;
				if ((typeOf _nearVehicle) in UnlockableItems) then
				{
					["SuccessTitleAndText", ["Success!", "The AutoLockPicker worked - PIN Code 0000"]] call ExileClient_gui_toaster_addTemplateToast;
					_nearVehicle setVariable ["ExileIsLocked", 0, true];
					_nearVehicle lock 0;
				}
				else
				{
					["SuccessTitleAndText", ["Success!", "The AutoLockPicker worked - PIN Code 0000"]] call ExileClient_gui_toaster_addTemplateToast;					
					_nearVehicle setVariable ["ExileIsLocked", 0, true];
					_nearVehicle lock 0;
				}
			}
			else
			{
				_chance2 = Ceil random 100;
				if(_chance2 <= ElectrocuteChance) then
				{
					_DamagetoInflict = (Ceil random (MaximumDamage - MinimumDamage))/100;
					_damage = Damage player;
					_damage = _damage + (MinimumDamage/100) + _DamagetoInflict;
					playSound "electricity_loop";
					if(_damage > 1 && InflictDamage) then
					{
						["ErrorTitleOnly", ["The AutoLockPicker malfunctioned and gave you an electric shock"]] call ExileClient_gui_toaster_addTemplateToast;
						systemChat "The AutoLockPicker malfunctioned and electrocuted you";
						player setDamage 1;
						ExileClientPlayerAttributes set [0, 0];
						"chromAberration" ppEffectEnable true;
						"radialBlur" ppEffectEnable true;
						enableCamShake true;
						for "_i" from 0 to 4 do
						{
							"chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
							"chromAberration" ppEffectCommit 1;
							"radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
							"radialBlur" ppEffectCommit 1;
							addcamShake[random 3, 1, random 3];
							uiSleep 1;
						};
						"chromAberration" ppEffectAdjust [0,0,true];
						"chromAberration" ppEffectCommit 5;
						"radialBlur" ppEffectAdjust  [0,0,0,0];
						"radialBlur" ppEffectCommit 5;
						uiSleep 6;
						"chromAberration" ppEffectEnable false;
						"radialBlur" ppEffectEnable false;
						resetCamShake;
					}
					else
					{
						["ErrorTitleOnly", ["The AutoLockPicker malfunctioned and gave you an electric shock"]] call ExileClient_gui_toaster_addTemplateToast;
						systemChat "The AutoLockPicker malfunctioned and gave you an electric shock";
						if(InflictDamage) then 
						{
							player setDamage _damage;
							ExileClientPlayerAttributes set [0, (1 - _damage) * 100];
						};
						player playActionNow "GestureSpasm0";
						"chromAberration" ppEffectEnable true;
						"radialBlur" ppEffectEnable true;
						enableCamShake true;
						uiSleep 1;
						player enablesimulation false;
						for "_i" from 0 to StunTime do
						{
							"chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
							"chromAberration" ppEffectCommit 1;
							"radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
							"radialBlur" ppEffectCommit 1;
							addcamShake[random 5, 1, random 5];
							uiSleep 1;
						};
						player enablesimulation true;
						"chromAberration" ppEffectAdjust [0,0,true];
						"chromAberration" ppEffectCommit 5;
						"radialBlur" ppEffectAdjust  [0,0,0,0];
						"radialBlur" ppEffectCommit 5;
						uiSleep 3;
						player playActionNow "gestureGo";
						"chromAberration" ppEffectEnable false;
						"radialBlur" ppEffectEnable false;
						resetCamShake;
					};
					deleteVehicle _x;
				}
				else
				{
					["ErrorTitleOnly", ["The AutoLockPicker didn't work, try again"]] call ExileClient_gui_toaster_addTemplateToast;
					deleteVehicle _x;
				}
			};
		};
	} forEach _lockpicks;
	_unit setVariable ["lockpicks",[]];
};
AutoLockPicker_AttachALP =
{
	//uncomment below if you want to allow players to lockpick from vehicles
	/*if!(vehicle player isEqualTo player)exitWith
	{
		["ErrorTitleAndText", ["AutoLockPicker", "You cannot do that from vehicles"]] call ExileClient_gui_toaster_addTemplateToast;
	};*/
	disableUserInput true;
	player enableSimulation false;
	_array = _this select 3;
	_charge = _array select 0;
	_unit = _array select 1;
	private "_class";
	for "_i" from 1 to MaterialRequired2Count step 1 do
	{
		_unit removemagazine MaterialRequired2;
		uiSleep 0.1;
	};
	_unit setUnitPos "MIDDLE"; 

	switch _charge do
	{
		case "Land_PortableLongRangeRadio_F":
		{
			_class = "Land_PortableLongRangeRadio_F";
		};
	};
	_nearVehicle = (nearestObjects [_unit,LockPickableItems,LockpickDistance]) select 0;
	_autolockpick = _class createVehicle [0,0,0];
	_autolockpick attachTo [_unit,[0,0,0],"leftHand"];
	_random0 = random 180;
	_random1 = random 180;
	[_autolockpick,_random0,_random1] call BIS_fnc_SetPitchBank;
	[_autolockpick,_nearVehicle,_unit,_random0,_random1] spawn
	{
		_autolockpick = _this select 0;
		_nearVehicle = _this select 1;
		_unit = _this select 2;
		_random0 = _this select 3;
		_random1 = _this select 4;
		_autolockpick attachTo [_nearVehicle, [0,0,0.2]];
		[_autolockpick,_random0,_random1] call BIS_fnc_SetPitchBank;
		_unit setVariable ["lockpicks",(_unit getVariable ["lockpicks",[]]) + [_autolockpick]];
		uiSleep 8;
	};
	uiSleep 1;
	[_unit] call AutoLockPicker_Activate;
};
AutoLockPicker_Actions =
{
	private ["_unit"];
	_unit = _this select 0;
	_unit addAction ["<t>" +"Use AutoLockPicker", AutoLockPicker_AttachALP, ["Land_PortableLongRangeRadio_F",_unit], 1, true, true, "","[MaterialRequired1,MaterialRequired2,_target] call AutoLockPicker_MatsCheck"];
};
[player] call AutoLockPicker_Actions;