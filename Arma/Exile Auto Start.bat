@echo off
color 0a
title CHERNO MAIN :2306
:Serverstart
echo Launching CHERNO MAIN Server
D:
cd "D:\Arma\Server"
echo CHERNO MAIN Server Monitor... Active !
start "Arma3" /min /wait arma3server_x64.exe -port=2306 -profiles=A3DS -world=empty -loadMissionToMemory -bepath=D:\Arma\Server\A3DS\BattlEye -config=@Exileserver\config.cfg -cfg=@ExileServer\basic.cfg -mod="@Exile;@CUP_Terrains_-_Core;@CUP_Terrains_-_Maps;@VSM_-_Uniforms;@VSM_-_Vests_and_Helmets;@VSM_-_Weapons;@[MELB]_Mission_Enhanced_Little_Bird;@Specialist_Military_Arms_(SMA)_Version_2.7.1;@CBA_A3;@Enhanced_Movement;@DS_Houses;@RHSUSAF;@VSM_-_Gear_Pack_v1;@NIArms_All_in_One;@RHSAFRF;@Extended_Base_Mod;@Extended_Items_Exile;@BloodLust" -servermod="@ExileServer;@infiSTAR_Exile;@Extended_Items_Exile;@Advanced_Towing;@Advanced_Sling_Loading;@Advanced_Rappelling;@Advanced_Urban_Rappelling" -autoinit -autoupdate -nosound -nosplash
ping 127.0.0.1 -n 15 >NUL
echo Exile Server Shutdown ... Restarting!
ping 127.0.0.1 -n 5 >NUL
cls
goto Serverstart