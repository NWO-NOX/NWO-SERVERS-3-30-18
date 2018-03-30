class CfgSMPaint
{
	class Settings
	{
		//Price it cost for RGB colors
		rgbPrice = 600;

		//Price it cost for HEX color.
		hexPrice = 500;
	};
	class Textures
	{
		/*
			{"Name", Price, {"Layer 1","Layer 2","Layer 3"}}
			{"Name", Price, "Texture"}

			Name = Name of the texture to be displayed.
			Price = Price of poptabs the texture cost.
			Texture = texture to be applied, will be listed on all layers.
			If you supply an array of textures, the textures will be added to the corresponding layer.
			To make it so the Texture does not show up on a layer, make it a empty string ( "" ):
			{"","Layer 2","Layer 3"}
		*/
		All[]=
		{
			{"Camo 01", 500, "SM\Paint\textures\camo01_co.paa"},
			{"Camo 02", 500, "SM\Paint\textures\camo02_co.paa"},
			{"Camo 03", 500, "SM\Paint\textures\camo03_co.paa"},
			{"Camo 04", 500, "SM\Paint\textures\camo04_co.paa"},
			{"Camo 05", 500, "SM\Paint\textures\camo05_co.paa"},
			{"Camo 06", 500, "SM\Paint\textures\camo06_co.paa"},
			{"Camo 07", 500, "SM\Paint\textures\camo07_co.paa"},
			{"Camo 08", 500, "SM\Paint\textures\camo08_co.paa"},
			{"Camo 09", 500, "SM\Paint\textures\camo09_co.paa"}
		};

		Exile_Construction_WoodWall_Static[] =
		{

		};
		
		Exile_Construction_WoodDrawBridge_Static[] =
		{

		};

		Exile_Construction_WoodLadder_Static[] =
		{

		};

		Exile_Construction_WoodWindow_Static[] =
		{

		};

		Exile_Construction_WoodFloor_Static[] =
		{
	
		};

		Exile_Construction_WoodFloorPort_Static[] =
		{

		};

		Exile_Construction_WoodSupport_Static[] =
		{

		};

		Exile_Construction_WoodStairs_Static[] =
		{
	
		};

		Exile_Construction_WoodWallHalf_Static[] =
		{
	
		};

		Exile_Construction_WoodDoorway_Static[] =
		{

		};

		Exile_Construction_WoodFloorPortSmall_Static[] =
		{

		};

		Exile_Construction_WoodDoor_Static[] =
		{

		};

		Exile_Construction_WoodGate_Static[] =
		{

		};

		Exile_Construction_ConcreteWall_Static[] =
		{

		};

		Exile_Construction_ConcreteWindow_Static[] =
		{

		};

		Exile_Construction_ConcreteWindowHatch_Static[] =
		{

		};

		Exile_Construction_ConcreteDoor_Static[] =
		{

		};

		Exile_Construction_ConcreteDoorway_Static[] =
		{

		};

		Exile_Construction_ConcreteFloor_Static[] =
		{

		};

		Exile_Construction_ConcreteFloorPort_Static[] =
		{

		};

		Exile_Construction_ConcreteFloorHatch_Static[] =
		{

		};

		Exile_Construction_ConcreteStairs_Static[] =
		{

		};

		Exile_Construction_ConcreteSupport_Static[] =
		{
	
		};

		Exile_Construction_ConcreteGate_Static[] =
		{

		};

		Exile_Construction_WoodWall_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodDrawBridge_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodFloorPortSmall_Reinforced_static[] =
		{

		};

		Exile_Construction_WoodWindow_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodFloor_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodWallHalf_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodDoorway_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodDoor_Reinforced_Static[] =
		{

		};

		Exile_Construction_WoodGate_Reinforced_Static[] =
		{

		};

		Exile_Bike_QuadBike_Abstract[] =
		{

			{"Blue", 100, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"}},
			{"Red", 100, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"}},
			{"White", 100, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"}},
			{"NATO", 150, {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"}},
			{"CSAT", 150, {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"}},
			{"FIA", 150, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"}},
			{"Guerilla 01",	150, {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"}},
			{"Guerilla 02",	150, {"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"}},
			{"Black", 100, {"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"}},
			{"Hex", 100, {"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"}}
		};

		Exile_Boat_MotorBoat_Abstract[] =
		{
			{"Police", 350, {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"}},
			{"Orange", 300, {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"}},
			{"White", 300, {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"}}
		};

		Exile_Boat_RubberDuck_Abstract[] =
		{
			{"CSAT", 200, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"},
			{"Digital", 200, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"},
			{"Orange", 150, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"},
			{"Blue", 150, "\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"},
			{"Black", 150, "\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"}
		};

		Exile_Boat_SDV_Abstract[] =
		{
			{"CSAT", 200, "\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"},
			{"Digital", 200, "\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"},
			{"Grey", 100, "\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"}
		};

		Exile_Chopper_Hellcat_Abstract[] =
		{
			{"Green", 350, "\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"},
			{"FIA", 500, "\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"}
		};

		Exile_Car_Kart_Abstract[] =
		{
			{"Bluking", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"RedStone", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Vrana", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Green", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Blue", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Orange", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"White", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Yellow", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}},
			{"Black", 100, {"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"}}
		};

		Exile_Chopper_Hummingbird_Civillian_Abstract[] =
		{
			{"Blue", 350, "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"},
			{"Red", 350, "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"},
			{"ION", 350, "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"},
			{"BlueLine", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"},
			{"Digital", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"},
			{"Elliptical", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"},
			{"Furious", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"},
			{"GrayWatcher", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"},
			{"Jeans", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"},
			{"Light", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"},
			{"Shadow", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"},
			{"Sheriff", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"},
			{"Speedy", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"},
			{"Sunset", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"},
			{"Vrana", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"},
			{"Wasp", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"},
			{"Wave", 350, "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"}
		};

		Exile_Chopper_Huron_Abstract[] =
		{
			{"Black", 450, {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"}},
			{"Green", 450, {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"}}
		};

		Exile_Chopper_Orca_Abstract[] =
		{
			{"CSAT", 350, "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"},
			{"Black", 350, "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"},
			{"Black Custom", 350, "\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"}
		};

		Exile_Chopper_Taru_Abstract[] =
		{
			{"CSAT", 500, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"BLACK", 500, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};

		Exile_Chopper_Taru_Transport_Abstract[] =
		{
			{"CSAT", 500, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"}},
			{"Black", 500, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"}}
		};

		Exile_Chopper_Taru_Covered_Abstract[] =
		{
			{"CSAT", 500, {"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"}},
			{"Black", 500, {"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"}}
		};

		Exile_Car_Hatchback_Abstract[] =
		{
			{"Rusty White", 50, "\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"},
			{"Rusty Red", 50, "\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"},
			{"Rusty Yellow", 50, "\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"},
			{"Beige", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"},
			{"Green", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"},
			{"Blue", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"},
			{"Blue Custom", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"},
			{"Beige Custom", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"},
			{"Yellow", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"},
			{"Grey", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"},
			{"Black", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"},
			{"Dark", 100, "\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"}
		};

		Exile_Car_Hatchback_Sport_Abstract[] =
		{
			{"Red", 100, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"},
			{"Blue", 100, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"},
			{"Orange", 100, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"},
			{"White", 100, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"},
			{"Beige", 100, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"},
			{"Green", 100, "\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"}
		};

		Exile_Car_Offroad_Abstract[] =
		{
			{"Rusty White", 50, "\exile_assets\model\RTV\Exile_offroad_03_co.paa"},
			{"Rusty Red", 50, "\exile_assets\model\RTV\Exile_offroad_01_co.paa"},
			{"Rusty Blue", 50, "\exile_assets\model\RTV\Exile_offroad_02_co.paa"},
			{"Red", 500, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"},
			{"Beige", 500, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"},
			{"White", 500, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"},
			{"Blue", 500, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"},
			{"Dark Red", 500, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"},
			{"Blue Custom", 500, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"},
			{"Guerilla 01", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"},
			{"Guerilla 02", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"},
			{"Guerilla 03", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"},
			{"Guerilla 04", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"},
			{"Guerilla 05", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"},
			{"Guerilla 06", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"},
			{"Guerilla 07", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"},
			{"Guerilla 08", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"},
			{"Guerilla 09", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"},
			{"Guerilla 10", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"},
			{"Guerilla 11", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"},
			{"Guerilla 12", 700, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"},
			{"Exile Black", 700, "exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"},
			{"Exile Light Blue", 700, "exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"},
			{"Exile Orange", 700, "exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"},
			{"Exile Pink", 700, "exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"},
			{"Exile White", 700, "exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"},
			{"Exile Yellow", 700, "exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"}
		};

		Exile_Car_LandRover_Abstract[] =
		{
			{"Red", 250, {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"}},
			{"Urban", 250, {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"}},
			{"Green", 250, {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Sand", 250, {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Desert", 250, {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};

		Exile_Car_LandRover_Ambulance_Abstract[] =
		{
			{"Green", 250, {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"}},
			{"Desert", 250, {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}},
			{"Sand", 250, {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"}}
		};

		Exile_Car_Octavius_Abstract[] =
		{
			{"White", 250, "exile_psycho_Octavia\Data\car_body_co.paa"},
			{"Black", 250, "exile_psycho_Octavia\Data\car_body_bl_co.paa"}
		};

		Exile_Chopper_Huey_Abstract[] =
		{
			{"Green", 700, {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Desert", 700, {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};

		Exile_Chopper_Huey_Armed_Abstract[] =
		{
			{"Green", 700, {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}},
			{"Desert", 700, {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"}}
		};

		Exile_Car_Offroad_Armed_Abstract[] =
		{
			{"Guerilla 01", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"},
			{"Guerilla 02", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"},
			{"Guerilla 03", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"},
			{"Guerilla 04", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"},
			{"Guerilla 05", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"},
			{"Guerilla 06", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"},
			{"Guerilla 07", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"},
			{"Guerilla 08", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"},
			{"Guerilla 09", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"},
			{"Guerilla 10", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"},
			{"Guerilla 11", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"},
			{"Guerilla 12", 250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}
		};

		Exile_Car_Offroad_Repair_Abstract[] =
		{
			{"Civillian", 150, "\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"},
			{"Red", 150, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"},
			{"Beige", 150, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"},
			{"White", 150, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"},
			{"Blue", 150, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"},
			{"DarkRed", 150, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"},
			{"BlueCustom", 150, "\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"},
			{"Guerilla 01",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"},
			{"Guerilla 02",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"},
			{"Guerilla 03",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"},
			{"Guerilla 04",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"},
			{"Guerilla 05",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"},
			{"Guerilla 06",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"},
			{"Guerilla 07",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"},
			{"Guerilla 08",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"},
			{"Guerilla 09",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"},
			{"Guerilla 10",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"},
			{"Guerilla 11",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"},
			{"Guerilla 12",	250, "\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"}
		};

		Exile_Car_SUV_Abstract[] =
		{
			{"Red", 100, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"},
			{"Black", 150, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"},
			{"Grey", 100, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"},
			{"Orange", 100, "\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"},
			{"Snow Camo", 150, "exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"},
			{"Leaf Camo", 150, "exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"},
			{"Leaf Camo (Dark)", 150, "exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"}
		};

        Exile_Car_SUVXL_Abstract[] = 
        {
            {"Black", 100, "\Exile_psycho_SUV_a3\Data\suv_body_co.paa"},
            {"Blue White", 150, "\Exile_psycho_SUV_a3\Data\textures\suv_body_bluewhite.paa"},
            {"Charcoal", 150, "\Exile_psycho_SUV_a3\Data\textures\suv_body_charcoal_co.paa"},
            {"Orange", 150, "\Exile_psycho_SUV_a3\Data\textures\suv_body_orange_co.paa"},
            {"Hello Kitty", 200, "\Exile_psycho_SUV_a3\Data\textures\suv_body_Pink_hello_co.paa"},
            {"Red", 150, "\Exile_psycho_SUV_a3\Data\textures\suv_body_red_co.paa"},
            {"Silver", 150, "\Exile_psycho_SUV_a3\Data\textures\suv_body_silver_co.paa"},
            {"White", 100, "\Exile_psycho_SUV_a3\Data\textures\suv_body_white_co.paa"},
            {"Yellow", 150, "\Exile_psycho_SUV_a3\Data\textures\suv_body_yellow_co.paa"}
        };

		Exile_Car_Van_Abstract[] =
		{
			{"Black", 100, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"White", 100, {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Red", 100, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Guerilla 01",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Guerilla 02",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Guerilla 03",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Guerilla 04",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Guerilla 05",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Guerilla 06",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Guerilla 07",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Guerilla 08",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}},
			{"Brown", 150, {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"}},
			{"Olive", 150, {"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"}}
		};

		Exile_Car_Van_Box_Abstract[] =
		{
			{"Black", 100, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"White", 100, {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Red", 100, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"}},
			{"Guerilla 01",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"}},
			{"Guerilla 02",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"}},
			{"Guerilla 03",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"}},
			{"Guerilla 04",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"}},
			{"Guerilla 05",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"}},
			{"Guerilla 06",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"}},
			{"Guerilla 07",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"}},
			{"Guerilla 08",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"}}
		};

		Exile_Car_Van_Fuel_Abstract[] =
		{
			{"Black", 100, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"White", 100, {"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Red", 100, {"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"}},
			{"Guerilla 01",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"}},
			{"Guerilla 02",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"}},
			{"Guerilla 03",	150, {"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"}}
		};

		Exile_Car_Tempest_Abstract[] =
		{
			{"Green Hex", 200, {"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"}}
		};

		Exile_Car_Ikarus_Abstract[] =
		{
			{"Blue", 200, "Exile_psycho_Ikarus\Data\bus_exterior_co.paa"},
			{"Red", 200, "Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"},
			{"Party", 500, "Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"}
		};

		Exile_Car_Ural_Open_Abstract[] =
		{
			{"Blue", 300, {"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Yellow", 300, {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Worker", 300, {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Military", 300, {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};

		Exile_Car_Ural_Covered_Abstract[] =
		{
			{"Blue", 300, {"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"}},
			{"Yellow", 300, {"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"}},
			{"Worker", 300, {"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"}},
			{"Military", 300, {"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"}}
		};

		Exile_Car_Lada_Abstract[] =
		{
			{"Green", 100, {"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"}},
			{"Taxi", 100, "exile_psycho_lada\data\Lada_red_CO.paa"},
			{"Red", 100, "exile_psycho_lada\data\Lada_red_CO.paa"},
			{"Hipster",	100, {"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"}}
		};

		Exile_Car_Volha_Abstract[] =
		{
			{"Blue", 100, "Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"},
			{"White", 100, "Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"},
			{"Black", 100, "Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"}
		};

		Exile_Car_Hunter_Abstract[] =
		{

			{"Exile White Edition", 1000, {"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"}},
			{"Exile Hex", 1000, {"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}},
			{"Exile Black", 1000, {"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"}}
		};

		Exile_Car_Ifrit_Abstract[] =
		{
			{"Green Hex", 1000, {"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"}}
		};

		Exile_Car_HMMWV_M2_Abstract[] =
		{

			{"Green", 1000, "Exile_psycho_hmmw\data\hmmwv_body_co.paa"},
			{"Desert", 1000, "Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}
		};

		Exile_Car_HMMWV_M134_Abstract[] =
		{

			{"Green", 1000, "Exile_psycho_hmmw\data\hmmwv_body_co.paa"},
			{"Desert", 1000, "Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}
		};

		Exile_Car_HMMWV_MEV_Abstract[] =
		{
			{"Green", 1000, "Exile_psycho_hmmw\data\hmmwv_body_cm.paa"},
			{"Desert",	1000, "Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"}
		};

		Exile_Car_HMMWV_UNA_Abstract[] =
		{
			{"Green", 1000, "Exile_psycho_hmmw\data\hmmwv_body_co.paa"},
			{"Desert", 1000, "Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"}
		};

		Exile_Car_BTR40_MG_Abstract[] =
		{

			{"Green", 1000, "exile_psycho_btr40\data\btr40ext_co.paa"},
			{"Camo", 1000, "exile_psycho_btr40\data\btr40extcamo_co.paa"}
		};

		Exile_Car_BTR40_Abstract[] =
		{

			{"Green", 1000, "exile_psycho_btr40\data\btr40ext_co.paa"},
			{"Camo", 1000, "exile_psycho_btr40\data\btr40extcamo_co.paa"}
		};

		Exile_Car_Golf_Abstract[] =
		{

			{"Red", 1000, "exile_psycho_VWGolf\data\vwgolf_body_co.paa"},
			{"Black", 1000, "exile_psycho_VWGolf\data\texture\black_co.paa"}
		};

		Exile_Plane_AN2_Abstract[] =
		{
			{"Green", 700, {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"}},
			{"Red, White & Blue", 700, {"Exile_psycho_An2\data\an2_1_a_co.paa","Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"}},
			{"Green Stripe", 700, {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"}}
		};

		B_G_Boat_Transport_02_F[] =
		{
			{"Blue", 150, {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"}}
		};

		Exile_Boat_WaterScooter_Abstract[] =
		{
			{"Blue", 150, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"}},
			{"Grey", 150, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"}},
			{"Lime", 150, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"}},
			{"Red", 150, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"White", 150, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"}},
			{"Yellow", 150, {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"}}
		};

		C_Plane_Civil_01_F[] =
		{
			{"Racing (Tan Interior)", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Racing", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Red Line (Tan Interior)", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Tribal (Tan Interior)", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Tribal", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}},
			{"Blue Wave (Tan Interior)", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"}},
			{"Blue Wave", 150, {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}}
		};

		B_T_VTOL_01_infantry_F[] =
		{
			{"Blue", 150, {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};

		B_T_VTOL_01_vehicle_F[] =
		{
			{"Blue", 150, {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"}}
		};

		B_CTRG_LSV_01_light_F[] =
		{
			{"Black", 150, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"}},
			{"Dazzle", 150, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Sand", 150, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};

		B_T_LSV_01_unarmed_black_F[] =
		{
			{"Olive", 150, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Dazzle", 150, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"}},
			{"Sand", 150, {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"}}
		};

		O_T_LSV_02_unarmed_black_F[] =
		{
			{"Arid", 150, {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"}},
			{"Green Hex", 150, {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"}}
		};

		C_Offroad_02_unarmed_orange_F[] =
		{
			{"Black", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"},
			{"Blue", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"},
			{"Brown", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa"},
			{"Green", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"},
			{"Olive", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa"},
			{"Red", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"},
			{"White", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"}
		};

		I_C_Offroad_02_unarmed_F[] =
		{
			{"Black", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"},
			{"Blue", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"},
			{"Brown", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa"},
			{"Green", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"},
			{"Orange", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"},
			{"Red", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"},
			{"White", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"},
			{"Olive", 150, "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa"}
		};
	};
};