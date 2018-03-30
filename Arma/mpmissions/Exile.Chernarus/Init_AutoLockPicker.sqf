waitUntil {!(isNull (findDisplay 46))};
    disableSerialization;
    uiSleep 4;
systemChat "Initialising AutoLockPicker";
[player] call AutoLockPicker_Actions;