//[] execVM "addons\statusBar\initt.sqf"; diag_log format['----------------------------------------------------------------------------------------StatusBar loaded']; sb_admin_list = ["76561197997973923"];	

            if ((getPlayerUID player) in [
"76561197997973923" //FROST
]) then { 
	     [] execVM "addons\statusBar\statusBarAdmin.sqf";
        } 
         else 
        {
         [] execVM "addons\statusBar\statusBar.sqf";
        };



               