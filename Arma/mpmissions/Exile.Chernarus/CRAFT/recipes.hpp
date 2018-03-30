///////////////////////////////////////////////////	
//Food & Drinks
///////////////////////////////////////////////////	
	class CookMeat: Exile_AbstractCraftingRecipe
	{
		name = "Cook Slab of Meat";
		pictureItem = "Exile_meat_cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_meat_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_meat"}
		};
	};
	
	class CookBBQSandwich: Exile_AbstractCraftingRecipe
	{
		name = "Cook BBQ Sandwich";
		pictureItem = "Exile_Item_BBQSandwich_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_BBQSandwich_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_BBQSandwich"}
		};
	};
	
	class CookCatFood: Exile_AbstractCraftingRecipe
	{
		name = "Cook Cat Food";
		pictureItem = "Exile_Item_CatFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_CatFood_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_CatFood"}
		};
	};
	
	class CookChristmasTinner: Exile_AbstractCraftingRecipe
	{
		name = "Cook Christmas Tinner";
		pictureItem = "Exile_Item_ChristmasTinner_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_ChristmasTinner_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_ChristmasTinner"}
		};
	};
	class CookDogFood: Exile_AbstractCraftingRecipe
	{
		name = "Cook Dog Food";
		pictureItem = "Exile_Item_DogFood_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_DogFood_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_DogFood"}
		};
	};
	
	class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
	{
		name = "Cook Glorious Knakworst";
		pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_GloriousKnakworst_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_GloriousKnakworst"}
		};
	};
	
	class CookMacasCheese: Exile_AbstractCraftingRecipe
	{
		name = "Cook Macas Cheese";
		pictureItem = "Exile_Item_MacasCheese_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_MacasCheese_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_MacasCheese"}
		};
	};
	class CookSausageGravy: Exile_AbstractCraftingRecipe
	{
		name = "Cook Sausage Gravy";
		pictureItem = "Exile_Item_SausageGravy_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_SausageGravy_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_SausageGravy"}
		};
	};
	
	class CookSurstromming: Exile_AbstractCraftingRecipe
	{
		name = "Cook Surströmming";
		pictureItem = "Exile_Item_Surstromming_Cooked";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_Surstromming_Cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_Surstromming"}
		};
	};
	class CookBakedBeans: Exile_AbstractCraftingRecipe
	{
		name = "Cook Baked Beans";
		pictureItem = "Exitem_bakedbeans";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_bakedbeans_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_bakedbeans"}
		};
	};
	class CookTacticalBacon: Exile_AbstractCraftingRecipe
	{
		name = "Cook Tactical Bacon";
		pictureItem = "Exitem_tacticalbacon";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_tacticalbacon_cooked"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_tacticalbacon"}
		};
	};
	class CookCoffee: Exile_AbstractCraftingRecipe
	{
		name = "Brew Coffee";
		pictureItem = "Exile_Item_PlasticBottleCoffee";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleCoffee"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleFreshWater"},
			{1, "Exile_Item_InstantCoffee"}
		};
	};
	class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
	};
	class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Salt Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
	};
	class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleDirtyWater";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
	};
	class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Fresh Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		requiredInteractionModelGroup = "CleanWaterSource";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
	};
	class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Salt Water";
		pictureItem = "Exile_Item_PlasticBottleSaltWater";
		requiresOcean = 1;
		returnedItems[] = 
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
	};
	class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"}
		};
	};
	class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Salt Water";
		pictureItem = "Exile_Item_PlasticBottleEmpty";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleEmpty"}
		};
		components[] =
		{
			{1, "Exile_Item_PlasticBottleSaltWater"}
		};
	};
	class PurifyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Dirty Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleDirtyWater"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class PurifyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Salt Water";
		pictureItem = "Exile_Item_PlasticBottleFreshWater";
		returnedItems[] =
		{
			{1, "Exile_Item_PlasticBottleFreshWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_PlasticBottleSaltWater"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class PurifyCanteenDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Dirty Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_dirty"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class PurifyCanteenSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Purify Salt Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_salt"},
			{1, "Exitem_purificationtablets"}
		};
	};
	class CookCoffeeCanteen: Exile_AbstractCraftingRecipe
	{
		name = "Brew Coffee";
		pictureItem = "Exitem_canteen";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_canteen_coffee"}
		};
		tools[] =
		{
			"Exile_Item_CookingPot"
		};
		components[] = 
		{
			{1, "Exitem_canteen_fresh"},
			{1, "Exile_Item_InstantCoffee"}
		};
	};
	class CookCanteenDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Dirty Water";
		pictureItem = "Exitem_canteen";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_dirty"}
		};
	};
	class CookCanteenSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Cook Salt Water";
		pictureItem = "Exitem_canteen";
		requiresFire = 1;
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen_salt"}
		};
	};
	class EmptyCanteenDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Dirty Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen"}
		};
		components[] =
		{
			{1, "Exitem_canteen_dirty"}
		};
	};
	class EmptyCanteenSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Empty Salt Water";
		pictureItem = "Exitem_canteen";
		returnedItems[] =
		{
			{1, "Exitem_canteen"}
		};
		components[] =
		{
			{1, "Exitem_canteen_salt"}
		};
	};
	class FillEmptyCanteenWithFreshWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Fresh Water";
		pictureItem = "Exitem_canteen";
		requiredInteractionModelGroup = "CleanWaterSource";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen"}
		};
	};
	class FillEmptyCanteenWithDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Exitem_canteen";
		requiredInteractionModelGroup = "WaterSource";
		returnedItems[] =
		{
			{1, "Exitem_canteen_fresh"}
		};
		components[] = 
		{
			{1, "Exitem_canteen"}
		};
	};
	class FillEmptyCanteenWithSaltWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Salt Water";
		pictureItem = "Exitem_canteen";
		requiresOcean = 1;
		returnedItems[] = 
		{
			{1, "Exitem_canteen_salt"}
		};
		components[] = 
		{
			{1, "Exitem_canteen"}
		};
	};
///////////////////////////////////////////////////	
//Miscellaneous Crafting
///////////////////////////////////////////////////		
	class CraftBandage: Exile_AbstractCraftingRecipe
	{
		name = "Craft Bandage";
		pictureItem = "Exile_Item_Bandage";
		returnedItems[] =
		{
			{1, "Exile_Item_Bandage"}
		};
		components[] = 
		{
			{2, "Exile_Item_ToiletPaper"}
		};
	};
	
	class BreachingChargeWood: Exile_AbstractCraftingRecipe
	{
		name = "Breaching Charge (Wood)";
		pictureItem = "Exile_Item_BreachingCharge_Wood";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		returnedItems[] =
		{
			{1, "Exitem_blueprint_woodcharge"},
			{1, "Exile_Item_BreachingCharge_Wood"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox",
			"Exitem_multimeter",
			"Exile_Item_Knife"
		};
		components[] = 
		{
			{1, "Exitem_blueprint_woodcharge"},
			{10, "Exile_Item_DuctTape"},
			{2, "Exile_Item_MobilePhone"},
			{5, "SatchelCharge_Remote_Mag"},
			{5, "Exile_Item_ExtensionCord"}
		};
	};
	class BreachingChargeMetal: Exile_AbstractCraftingRecipe
	{
		name = "Breaching Charge (Metal)";
		pictureItem = "Exile_Item_BreachingCharge_Metal";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		returnedItems[] =
		{
			{1, "Exitem_blueprint_metalcharge"},
			{1, "Exile_Item_BreachingCharge_Metal"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox",
			"Exitem_multimeter",
			"Exile_Item_Knife"
		};
		components[] = 
		{
			{1, "Exitem_blueprint_metalcharge"},
			{10, "Exile_Item_DuctTape"},
			{1, "Exile_Item_MobilePhone"},
			{5, "SatchelCharge_Remote_Mag"},
			{1, "Exile_Item_ZipTie"},
			{5, "Exile_Item_ExtensionCord"}
		};
	};
	class BreachingChargeBigMomma: Exile_AbstractCraftingRecipe
	{
		name = "Breaching Charge (Big Momma)";
		pictureItem = "Exile_Item_BreachingCharge_BigMomma";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		returnedItems[] =
		{
			{1, "Exitem_blueprint_concretecharge"},
			{1, "Exile_Item_BreachingCharge_BigMomma"}
		};
		tools[] =
		{
			"Exile_Item_Foolbox",
			"Exitem_multimeter",
			"Exile_Item_Knife"
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretecharge"},
			{5, "Exile_Item_BreachingCharge_Metal"},
			{2, "Exile_Item_MobilePhone"},
			{5, "Exile_Item_DuctTape"},
			{2, "Exile_Item_ZipTie"},
			{5, "SatchelCharge_Remote_Mag"},
			{5, "Exile_Item_ExtensionCord"}	
		};
	};
	class CraftFirePlace: Exile_AbstractCraftingRecipe
	{
		name = "Craft Fire Place";
		pictureItem = "Exile_Item_CampFireKit";
		returnedItems[] = 
		{
			{1, "Exile_Item_CampFireKit"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodLog"}
		};
	};
	class CraftFloodLight: Exile_AbstractCraftingRecipe
	{
		name = "Craft Flood Light";
		pictureItem = "Exile_Item_FloodLightKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Foolbox"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_floodlight"},
			{1, "Exile_Item_FloodLightKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_floodlight"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_LightBulb"},
			{1, "Exile_Item_ExtensionCord"}
		};
	};
	class CraftPortableGenerator: Exile_AbstractCraftingRecipe
	{
		name = "Craft Portable Generator";
		pictureItem = "Exile_Item_PortableGeneratorKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Foolbox"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_generator"},
			{1, "Exile_Item_PortableGeneratorKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_generator"},
			{4, "Exile_Item_MetalBoard"},
			{1, "Exile_Item_FuelCanisterFull"},
			{1, "Exile_Item_ExtensionCord"}
		};
	};
	class EmptyFuelCanister: Exile_AbstractCraftingRecipe
	{
		name = "Empty Fuel Canister";
		pictureItem = "Exile_Item_FuelCanisterEmpty";
		returnedItems[] = 
		{
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
	{
		name = "Fill Dirty Water";
		pictureItem = "Exile_Item_WaterCanisterDirtyWater";
		requiredInteractionModelGroup = "WaterSource"; 
		returnedItems[] =
		{
			{1, "Exile_Item_WaterCanisterDirtyWater"}
		};
		components[] = 
		{
			{1, "Exile_Item_WaterCanisterEmpty"}
		};
	};
	class FillFuelCanister: Exile_AbstractCraftingRecipe
	{
		name = "Fill Fuel Canister";
		pictureItem = "Exile_Item_FuelCanisterFull";
		requiredInteractionModelGroup = "FuelSource";
		returnedItems[] = 
		{
			{1, "Exile_Item_FuelCanisterFull"}
		};
		components[] = 
		{
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
	};
	class CraftWoodPlank: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Plank";
		pictureItem = "Exile_Item_WoodPlank";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Handsaw", 
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodPlank"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodLog"}
		};
	};
	class CraftMetalPole: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Pole";
		pictureItem = "Exile_Item_MetalPole";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalPole"},
			{1, "Exitem_blueprint_metal"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_metal"},
			{4, "Exile_Item_JunkMetal"}
		};
	};
	class CraftMetalBoard: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Board";
		pictureItem = "Exile_Item_MetalBoard";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalBoard"},
			{1, "Exitem_blueprint_metal"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_metal"},
			{4, "Exile_Item_JunkMetal"}
		};
	};
	class CraftJunkMetal: Exile_AbstractCraftingRecipe
	{
		name = "Craft Junk Metal";
		pictureItem = "Exile_Item_JunkMetal";
		requiredInteractionModelGroup = "WorkBench";
		requiresFire = 1;
		tools[] = 
		{
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_JunkMetal"}
		};
		components[] = 
		{
			{4, "Exile_Item_Can_Empty"}
		};
	};
	class CraftJunkMetal2: Exile_AbstractCraftingRecipe
	{
		name = "Craft Junk Metal";
		pictureItem = "Exile_Item_JunkMetal";
		requiredInteractionModelGroup = "WorkBench";
		requiresFire = 1;
		tools[] = 
		{
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_JunkMetal"}
		};
		components[] = 
		{
			{4, "Exitem_can_crushed"}
		};
	};
///////////////////////////////////////////////////	
//Base Building Crafting
///////////////////////////////////////////////////	
	class CraftBoard: Exile_AbstractCraftingRecipe
	{
		name = "Craft Window Board";
		pictureItem = "Exitem_board";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_board"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodLog"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWorkBench: Exile_AbstractCraftingRecipe
	{
		name = "Craft Work Bench";
		pictureItem = "Exile_Item_WorkBenchKit";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WorkBenchKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodLog"},
			{1, "Exitem_nails"}
		};
	};
	class CraftStorageCrate: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Storage Crate";
		pictureItem = "Exile_Item_StorageCrateKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_crate"},
			{1, "Exile_Item_StorageCrateKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_crate"},
			{5, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftSmallShelf: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Small Shelf";
		pictureItem = "Exitem_shelf_small";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_shelf_small"},
			{1, "Exitem_shelf_small"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_shelf_small"},
			{10, "Exile_Item_WoodPlank"},
			{2, "Exile_Item_MetalBoard"},
			{1, "Exitem_nails"}
		};
	};
	class CraftLargeShelf: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Large Shelf";
		pictureItem = "Exitem_shelf_large";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_shelf_large"},
			{1, "Exitem_shelf_large"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_shelf_large"},
			{14, "Exile_Item_WoodPlank"},
			{4, "Exile_Item_MetalPole"},
			{1, "Exitem_nails"}
		};
	};
	class CraftStoragePallet: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Storage Pallet";
		pictureItem = "Exitem_pallet_large";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_pallet_large"},
			{1, "Exitem_pallet_large"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_pallet_large"},
			{6, "Exile_Item_WoodPlank"},
			{5, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftAdvancedWorkbench: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Advanced Workbench";
		pictureItem = "Exitem_advancedworkbench";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_measuringtape",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_workbench"},
			{1, "Exitem_advancedworkbench"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_workbench"},
			{4, "Exile_Item_MetalBoard"},
			{4, "Exile_Item_MetalPole"},
			{1, "Exitem_nails"}
		};
	};
	class CraftCodeLock: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Code Lock";
		pictureItem = "Exile_Item_Codelock";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_codelock"},
			{1, "Exile_Item_Codelock"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_codelock"},
			{2, "Exile_Item_MetalBoard"},
			{1, "Exile_Item_MobilePhone"},
			{1, "Exile_Item_DuctTape"},
			{2, "Exile_Item_LightBulb"},
			{1, "Exitem_nails"}
		};
	};
	class CraftSafe: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Safe";
		pictureItem = "Exile_Item_Safekit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_safe"},
			{1, "Exile_Container_Safe"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_safe"},
			{1, "Exile_Item_CodeLock"},
			{1, "Exile_Item_DuctTape"},
			{2, "Exile_Item_MetalPole"},
			{6, "Exile_Item_MetalBoard"},
			{1, "Exitem_nails"}
		};
	};
	class CraftFlag: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Flag";
		pictureItem = "Exile_Item_Flag";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_flag"},
			{1, "Exile_Item_Flag"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_flag"},
			{10, "Exile_Item_MetalPole"},
			{6, "Exitem_cloth"},
			{2, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class CraftEngine: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Engine";
		pictureItem = "exitem_engine";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exile_Item_Wrench",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_engine"},
			{1, "Exitem_engine"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_engine"},
			{4, "Exile_Item_MetalBoard"},
			{6, "Exile_Item_MetalPole"},
			{2, "Exile_Item_DuctTape"},
			{1, "Exitem_carbattery"},
			{1, "Exile_Item_OilCanister"},
			{1, "Exitem_nails"}
		};
	};
	class CraftMainRotorAssembly: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Main Rotor Assembly";
		pictureItem = "Exitem_rotor";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Foolbox",
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exile_Item_Wrench",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_rotor"},
			{1, "Exitem_rotor"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_rotor"},
			{2, "Exile_Item_MetalBoard"},
			{8, "Exile_Item_MetalPole"},
			{4, "Exile_Item_DuctTape"},
			{1, "Exile_Item_OilCanister"},
			{1, "Exitem_nails"}
		};
	};
	class Craft9mmSuppressor: Exile_AbstractCraftingRecipe  
	{
		name = "9mm Suppressor";
		pictureItem = "";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch",
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_9mmsuppressor"},
			{1, "muzzle_snds_L"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_9mmsuppressor"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class Craft556Suppressor: Exile_AbstractCraftingRecipe  
	{
		name = "Craft 5.56 Suppressor";
		pictureItem = "";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch",
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_556suppressor"},
			{1, "muzzle_snds_M"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_556suppressor"},
			{2, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class Craft762Suppressor: Exile_AbstractCraftingRecipe  
	{
		name = "Craft 7.62 Suppressor";
		pictureItem = "";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch",
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_762suppressor"},
			{1, "muzzle_snds_B"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_762suppressor"},
			{3, "Exile_Item_MetalPole"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_DuctTape"},
			{1, "Exitem_nails"}
		};
	};
	class CraftBeer: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Beer";
		pictureItem = "Exile_Item_Beer";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_beer"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_Beer"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_beer"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_Can_Empty"},
			{1, "Exile_Item_InstantCoffee"},
			{2, "Exile_Item_Raisins"},
			{1, "Exile_Item_Moobar"}
		};
	};
	class CraftLabtop: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Laptop";
		pictureItem = "Exile_Item_Laptop";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exile_Item_Wrench",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_labtop"},
			{1, ""}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_labtop"},
			{2, "Exile_Item_MetalBoard"},
			{4, "Exile_Item_MobilePhone"},
			{1, "Exile_Item_ExtensionCord"},
			{1, "Exitem_camera"},
			{1, "Exitem_nails"}
		};
	};
	class CraftMatches: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Matches";
		pictureItem = "Exile_Item_Matches";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Pliers"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_matches"},
			{1, "Exile_Item_Matches"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_matches"},
			{1, "Exitem_pencil"},
			{1, "Exile_Item_WoodLog"}
		};
	};
	class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Doorway";
		pictureItem = "Exile_Item_WoodDoorwayKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodDoorwayKit"}
		};
		components[] = 
		{
			{8, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodFloor: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Floor";
		pictureItem = "Exile_Item_WoodFloorKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodFloorKit"}
		};
		components[] = 
		{
			{10, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Floor Port";
		pictureItem = "Exile_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodFloorPortKit"}
		};
		components[] = 
		{
			{8, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodGate: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Gate";
		pictureItem = "Exile_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodGateKit"}
		};
		components[] = 
		{
			{10, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodStairs: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Stairs";
		pictureItem = "Exile_Item_WoodStairsKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodStairsKit"}
		};
		components[] = 
		{
			{6, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodSupport: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Support";
		pictureItem = "Exile_Item_WoodSupportKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodSupportKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodWall: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Wall";
		pictureItem = "Exile_Item_WoodWallKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWallKit"}
		};
		components[] = 
		{
			{10, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
	{
		name = "Craft 1/2 Wood Wall";
		pictureItem = "Exile_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWallHalfKit"}
		};
		components[] = 
		{
			{5, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftWoodWindow: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Window";
		pictureItem = "Exile_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWindowKit"}
		};
		components[] = 
		{
			{8, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
	{
		name = "Craft Fortification Upgrade";
		pictureItem = "Exile_Item_MetalBoard"; 
		requiresFire = 1;
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_fortification"},
			{1, "Exile_Item_FortificationUpgrade"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_fortification"},
			{2, "Exile_Item_MetalPole"},
			{8, "Exile_Item_MetalBoard"},
			{1, "Exitem_nails"}
		};
	};
	class CraftConcreteDoorway: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Doorway";
		pictureItem = "Exile_Item_ConcreteDoorwayKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteDoorwayKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{3, "Exile_Item_Cement"},
			{3, "Exile_Item_Sand"},
			{3, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftConcreteFloor: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Floor";
		pictureItem = "Exile_Item_ConcreteFloorKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteFloorKit"},
			{2, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{2, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{2, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftConcreteFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Floor Port";
		pictureItem = "Exile_Item_ConcreteFloorPortKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteFloorPortKit"},
			{3, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{3, "Exile_Item_Cement"},
			{3, "Exile_Item_Sand"},
			{3, "Exile_Item_MetalPole"},
			{3, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftConcreteGate: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Gate";
		pictureItem = "Exile_Item_ConcreteGateKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteGateKit"},
			{4, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{4, "Exile_Item_Cement"},
			{4, "Exile_Item_Sand"},
			{4, "Exile_Item_MetalPole"},
			{4, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftConcretStairs: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Stairs";
		pictureItem = "Exile_Item_ConcreteStairsKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteStairsKit"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_Cement"},
			{1, "Exile_Item_Sand"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftConcretSupport: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Support";
		pictureItem = "Exile_Item_ConcreteSupportKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteSupportKit"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_Cement"},
			{1, "Exile_Item_Sand"},
			{1, "Exile_Item_MetalPole"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftConcreteWall: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Wall";
		pictureItem = "Exile_Item_ConcreteWallKit";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{2, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{2, "Exile_Item_MetalPole"},
			{2, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftRepairKitConcrete: Exile_AbstractCraftingRecipe
	{
		name = "Craft Concrete Repair Kit";
		pictureItem = "Exile_Item_Cement";
		requiresConcreteMixer = true;
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_RepairKitConcrete"},
			{1, "Exile_Item_WaterCanisterEmpty"},
			{1, "Exile_Item_FuelCanisterEmpty"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{4, "Exile_Item_Cement"},
			{2, "Exile_Item_Sand"},
			{1, "Exile_Item_WaterCanisterDirtyWater"},
			{1, "Exile_Item_FuelCanisterFull"}
		};
	};
	class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Repair Kit";
		pictureItem = "Exile_Item_RepairKitMetal";
		requiresFire = 0;
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_fortification"},
			{1, "Exile_Item_RepairKitMetal"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_fortification"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"},
			{1, "Exitem_nails"}
		};
	};
	class CraftRepairKitWood: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wood Repair Kit";
		pictureItem = "Exile_Item_RepairKitWood";
		requiresFire = 0;
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_RepairKitWood"}
		};
		components[] = 
		{
			{4, "Exile_Item_WoodPlank"}
		};
	};
	class UpgradeToConcreteDoor: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Door";
		pictureItem = "Exile_Item_ConcreteDoorKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteDoorKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteDoorwayKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
	};
	class UpgradeToConcreteFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Floor Port";
		pictureItem = "Exile_Item_ConcreteFloorPortKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteFloorPortKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteFloorKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
	};
	class UpgradeToConcreteGate: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Gate";
		pictureItem = "Exile_Item_ConcreteGateKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteGateKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
	};
	class UpgradeToConcreteWindow: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Concrete Window";
		pictureItem = "Exile_Item_ConcreteWindowKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteWindowKit"}
		};
		components[] = 
		{
			{1, "Exitem_blueprint_concretebuilding"},
			{1, "Exile_Item_ConcreteWallKit"},
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalBoard"}
		};
	};
	class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Door";
		pictureItem = "Exile_Item_WoodDoorKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodDoorKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodDoorwayKit"},
			{2, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Floor Port";
		pictureItem = "Exile_Item_WoodFloorPortKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodFloorPortKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodFloorKit"},
			{2, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Gate";
		pictureItem = "Exile_Item_WoodGateKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodGateKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodWallKit"},
			{4, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Wall";
		pictureItem = "Exile_Item_WoodWallHalfKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWallKit"}
		};
		components[] = 
		{
			{2, "Exile_Item_WoodWallHalfKit"},
			{1, "Exitem_nails"}
		};
	};
	class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
	{
		name = "Upgrade to Wood Window";
		pictureItem = "Exile_Item_WoodWindowKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Handsaw",
			"Exitem_measuringtape"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WoodWindowKit"}
		};
		components[] = 
		{
			{1, "Exile_Item_WoodWallKit"},
			{2, "Exile_Item_WoodPlank"},
			{1, "Exitem_nails"}
		};
	};
	/*
	class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
	{
		name = "Craft H-barrier (5 Blocks)";
		pictureItem = "Exile_Item_HBarrier5Kit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Pliers"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_HBarrier5Kit"}
		};
		components[] = 
		{
			{3, "Exile_Item_SandBagsKit_Long"},
			{2, "Exile_Item_MetalWire"}
		};
	};
	class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
	{
		name = "Craft Sandbags Kit (Corner)";
		pictureItem = "Exile_Item_SandBagsKit_Corner";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_SandBagsKit_Corner"}
		};
		components[] = 
		{
			{3, "Exile_Item_Sand"}
		};
	};
	class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
	{
		name = "Craft Sand Bags Kit (Long)";
		pictureItem = "Exile_Item_SandBagsKit_Long";
		requiredInteractionModelGroup = "WorkBench";
		returnedItems[] = 
		{
			{1, "Exile_Item_SandBagsKit_Long"}
		};
		components[] = 
		{
			{6, "Exile_Item_Sand"}
		};
	};
	*/
	class CraftWireFenceKit: Exile_AbstractCraftingRecipe
	{
		name = "Craft Wire Fence Kit";
		pictureItem = "Exile_Item_WireFenceKit";
		requiredInteractionModelGroup = "WorkBench";
		tools[] = 
		{
			"Exile_Item_Hammer",
			"Exile_Item_Grinder", 
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WireFenceKit"}
		};
		components[] = 
		{
			{2, "Exile_Item_MetalPole"},
			{4, "Exile_Item_MetalWire"},
			{1, "Exitem_nails"}
		};
	};
	class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Hedgehog";
		pictureItem = "Exile_Item_MetalHedgehogKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Grinder",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalHedgehogKit"}
		};
		components[] = 
		{
			{4, "Exile_Item_MetalPole"}
		};
	};
	class CraftMetalWire: Exile_AbstractCraftingRecipe
	{
		name = "Craft Metal Wire";
		pictureItem = "Exile_Item_MetalWire";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Knife",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_MetalWire"}
		};
		components[] = 
		{
			{3, "Exile_Item_ExtensionCord"}
		};
	};
	class CraftWaterBarrelKit: Exile_AbstractCraftingRecipe
	{
		name = "Craft Water Barrel Kit";
		pictureItem = "Exile_Item_WaterBarrelKit";
		requiredInteractionModelGroup = "AdvancedWorkbench";
		requiresFire = 1;
		tools[] = 
		{
			"Exile_Item_Knife",
			"Exitem_torch"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_WaterBarrelKit"}
		};
		components[] = 
		{
			{20, "Exile_Item_PlasticBottleEmpty"}
		};
	};
	class CraftCanOpenerKnife: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Can Opener";
		pictureItem = "Exile_Item_CanOpener";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_CanOpener"}
		};
		components[] = 
		{
			{1, "Exile_Item_Knife"}
		};
	};
	class CraftCanOpenerPliers: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Can Opener";
		pictureItem = "Exile_Item_CanOpener";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_CanOpener"}
		};
		components[] = 
		{
			{1, "Exile_Item_Pliers"}
		};
	};
		class CraftCanOpenerScrewdriver: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Can Opener";
		pictureItem = "Exile_Item_CanOpener";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_CanOpener"}
		};
		components[] = 
		{
			{1, "Exile_Item_Screwdriver"}
		};
	};
	class CraftCanOpenerJunkMetal: Exile_AbstractCraftingRecipe  
	{
		name = "Craft Can Opener";
		pictureItem = "Exile_Item_CanOpener";
		tools[] = 
		{
			"Exile_Item_Hammer"
		};
		returnedItems[] = 
		{
			{1, "Exile_Item_CanOpener"}
		};
		components[] = 
		{
			{1, "Exile_Item_JunkMetal"}
			
		};
	};
	
