class CfgPatches {
    class UFO {
        units[] = {"TILK_UFO"



        }; //
        weapons[] = {}; //
        requiredVersion = 0.1; //
        requiredAddons[] = {}; // achequer
    };
};

class cfgVehicles
{
#include"\UFO\UFO.hpp"

};

class CfgEditorCategories
{
	class EdCat_ufo_mod // Category class, you point to it in editorCategory property
	{
		displayName = "UFO mod"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_ufo_objects // Category class, you point to it in editorSubcategory property
	{
		displayName = "UFO"; // Name visible in the list
	};
};
