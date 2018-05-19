allTILKufos[]={"TILK_UFO"};
class Land_CampingChair_V2_F;

//config UFO(s)
class UFOPropBase_F : Land_CampingChair_V2_F {
	author = "TILK";
	mapSize = 4;
	scope = 0;
	scopeCurator = 0;
	icon = "iconObject_1x2";
    editorCategory = "EdCat_ufo_mod";
	destrType = "DestructBuilding";
	cost = 0;
	accuracy = 1000;
	class AttributeValues {
		objectIsSimple = 0;
	};
	// Strategic
	side = 3;
	armor = 250;
	ladders[] = {};
	// Building
	//nameSound = "obj_building";
	// Static
	reversed = 0;
	hasDriver = 0;
	audible = 0;
	//simulation = "house";
	class DestructionEffects {};
	picture = "pictureStaticObject";
	weapons[] = {};
	magazines[] = {};
	irTarget = 0;
	type = 1;
	threat[] = {0, 0, 0};
	maxSpeed = 0;
	coefInside = 2;
	coefInsideHeur = 2;
	coefSpeedInside = 2;
	windSockExist = 0;
	countsForScoreboard = 0;
	class EventHandlers {
		//init = "_this call TILK_fnc_ignition;";
		class CBA_Extended_EventHandlers {};
	};
};

class TILK_UFO : UFOPropBase_F {

	editorPreview = "\UFO\icons\UFO_icon.paa";
	scope = 2;
	scopeCurator = 2;
	displayName = "UFO";
	model = "\UFO\objects\UFO.p3d";
	icon = "iconObject_1x2";
    editorSubcategory = "EdSubcat_ufo_objects";

};