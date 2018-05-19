class CfgPatches {
    class UFO {
        units[] = {"TILK_UFO"



        }; //
        weapons[] = {}; 
        requiredVersion = 1; 
        requiredAddons[] = {}; 
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
		displayName = "UFO"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class EdSubcat_ufo_objects // Category class, you point to it in editorSubcategory property
	{
		displayName = "UFO 1"; // Name visible in the list
	};
};
