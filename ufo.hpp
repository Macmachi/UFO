class Wreck_base_F;

class TILK_UFO: Wreck_base_F {
	author = "TILK";
	mapSize = 7.53;
	class SimpleObject {
		eden = 0;
		animate[] = {};
		hide[] = {};
		verticalOffset = 0.829;
		verticalOffsetWorld = 0;
		init = "''";
	};
	editorPreview = "\UFO\icons\UFO_icon.paa";
	_generalMacro = "Land_Wreck_BMP2_F";
	scope = 2;
	scopeCurator = 2;
	displayName = "UFO";
	model = "\UFO\objects\UFO_arma3.p3d";
	icon = "iconObject_1x2";
	// Wreck_base_F
    editorCategory = "EdCat_ufo_mod";
    editorSubcategory = "EdSubcat_ufo_objects";
	destrType = "DestructNo";
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
	nameSound = "obj_building";
	// Static
	reversed = 0;
	hasDriver = 0;
	audible = 0;
	simulation = "house";
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
		class CBA_Extended_EventHandlers {};
	};
	
	// Autres classes mises en commentaire car pris d'un props véhicule et inutile  
	/*	
	SLX_XEH_DISABLED = 1;
	// All
	access = 0;
	autocenter = 1;
	animated = 1;
	shadow = 1;
	featureType = 0;
	faction = "Default";
	speechSingular[] = {};
	speechPlural[] = {};
	maxDetectRange = 20;
	detectSkill = 20;
	mineAlertIconRange = 200;
	killFriendlyExpCoef = 1;
	weaponSlots = 0;
	camouflage = 2;
	spotableDarkNightLightsOff = 0.001;
	spotableNightLightsOff = 0.02;
	spotableNightLightsOn = 4;
	accuracyDarkNightLightsOff = 0.001;
	accuracyNightLightsOff = 0.006;
	accuracyNightLightsOn = 0.1;
	attenuationEffectType = "";
	insideSoundCoef = 0.5;
	outsideSoundFilter = 0;
	occludeSoundsWhenIn = 0.316228;
	obstructSoundsWhenIn = 0.562341;
	obstructSoundLFRatio = 0;
	occludeSoundLFRatio = 0.25;
	unloadInCombat = 0;
	antiRollbarForceCoef = 0;
	antiRollbarForceLimit = 5;
	antiRollbarSpeedMin = 20;
	antiRollbarSpeedMax = 60;
	slowSpeedForwardCoef = 0.3;
	normalSpeedForwardCoef = 0.85;
	epeImpulseDamageCoef = 30;
	gunnerHasFlares = 1;
	enableManualFire = 1;
	sensitivity = 2.5;
	sensitivityEar = 0.0075;
	portrait = "";
	ghostPreview = "";
	armorLights = 0.4;
	armorStructural = 1;
	crewVulnerable = 1;
	damageResistance = 0.004;
	crewCrashProtection = 1;
	replaceDamaged = "";
	replaceDamagedLimit = 0.9;
	replaceDamagedHitpoints[] = {};
	keepInEPESceneAfterDeath = 0;
	fuelCapacity = 0;
	fuelConsumptionRate = 0.01;
	extCameraPosition[] = {0, 2, -20};
	groupCameraPosition[] = {0, 5, -30};
	extCameraParams[] = {1};
	steerAheadSimul = 0.3;
	steerAheadPlan = 0.4;
	cameraSmoothSpeed = 5;
	minFireTime = 20;
	predictTurnSimul = 1.2;
	predictTurnPlan = 1;
	indirectHitEnemyCoefAI = 10;
	indirectHitFriendlyCoefAI = -20;
	indirectHitCivilianCoefAI = -20;
	indirectHitUnknownCoefAI = -0.5;
	precision = 5;
	brakeDistance = 5;
	formationX = 10;
	formationZ = 20;
	formationTime = 5;
	alwaysTarget = 0;
	irScanRangeMin = 0;
	irScanRangeMax = 0;
	irScanToEyeFactor = 1;
	irScanGround = 1;
	laserTarget = 0;
	laserScanner = 0;
	nvTarget = 0;
	nvScanner = 0;
	artilleryTarget = 0;
	artilleryScanner = 0;
	canUseScanners = 1;
	preferRoads = 0;
	unitInfoType = "RscUnitInfoTank";
	unitInfoTypeLite = 0;
	hideUnitInfo = 0;
	nightVision = 0;
	commanderCanSee = 31;
	gunnerCanSee = "4+8+16";
	driverCanSee = "2+8+16";
	showCrewAim = 7;
	radarType = 0;
	limitedSpeedCoef = 0.22;
	secondaryExplosion = -1;
	driverForceOptics = 0;
	hideWeaponsDriver = 1;
	hideWeaponsCargo = 0;
	getInRadius = 2.5;
	selectionClan = "";
	selectionDashboard = "";
	selectionShowDamage = "";
	selectionBackLights = "";
	memoryPointSupply = "doplnovani";
	supplyRadius = -1;
	enableGPS = 0;
	enableWatch = 0;
	enableRadio = 0;
	lockDetectionSystem = 0;
	incomingMissileDetectionSystem = 0;
	headGforceLeaningFactor[] = {0.01, 0.002, 0.01};
	usePreciseGetInAction = 0;
	allowTabLock = 1;
	showAllTargets = 0;
	dustFrontLeftPos = "dustFrontLeft";
	dustFrontRightPos = "dustFrontRight";
	dustBackLeftPos = "dustBackLeft";
	dustBackRightPos = "dustBackRight";
	wheelCircumference = 1;
	waterLeakiness = 0.5;
	waterResistanceCoef = 0.5;
	waterLinearDampingCoefX = 0;
	waterLinearDampingCoefY = 0;
	waterAngularDampingCoef = 0;
	showNVGDriver = 0;
	showNVGCommander = 0;
	showNVGGunner = 0;
	showNVGCargo[] = {0};
	soundAttenuationCargo[] = {1};
	hullDamageCauseExplosion = 0;
    class MarkerLights {};
	class NVGMarkers {};
	class NVGMarker {
		diffuse[] = {1, 1, 1, 1};
		ambient[] = {1, 1, 1, 1};
		brightness = 1;
		blinking = 0;
		onlyInNvg = 0;
	};
	class Turrets {};
	class HeadLimits {
		initAngleX = 5;
		minAngleX = -30;
		maxAngleX = 40;
		initAngleY = 0;
		minAngleY = -90;
		maxAngleY = 90;
		minAngleZ = -45;
		maxAngleZ = 45;
		rotZRadius = 0.2;
	};
	class ViewPilot {
		initAngleX = 5;
		minAngleX = -55;
		maxAngleX = 85;
		initAngleY = 0;
		minAngleY = -150;
		maxAngleY = 150;
		minFov = 0.25;
		maxFov = 1.25;
		initFov = 0.75;
		minMoveX = 0;
		maxMoveX = 0;
		minMoveY = 0;
		maxMoveY = 0;
		minMoveZ = 0;
		maxMoveZ = 0;
		speedZoomMaxSpeed = 1e+010;
		speedZoomMaxFOV = 0;
	};
	class ViewCargo {
		initAngleX = 5;
		minAngleX = -85;
		maxAngleX = 85;
		initAngleY = 0;
		minAngleY = -150;
		maxAngleY = 150;
		minFov = 0.25;
		maxFov = 1.25;
		initFov = 0.75;
		minMoveX = 0;
		maxMoveX = 0;
		minMoveY = 0;
		maxMoveY = 0;
		minMoveZ = 0;
		maxMoveZ = 0;
		speedZoomMaxSpeed = 1e+010;
		speedZoomMaxFOV = 0;
	};
	class ViewOptics {
		initAngleX = 0;
		minAngleX = -30;
		maxAngleX = 30;
		initAngleY = 0;
		minAngleY = -100;
		maxAngleY = 100;
		initFov = 0.7;
		minFov = 0.42;
		maxFov = 0.85;
		minMoveX = 0;
		maxMoveX = 0;
		minMoveY = 0;
		maxMoveY = 0;
		minMoveZ = 0;
		maxMoveZ = 0;
		speedZoomMaxSpeed = 1e+010;
		speedZoomMaxFOV = 0;
	};
	class PilotSpec {
		showHeadPhones = 0;
	};
	class CargoSpec {
		class Cargo1 {
			showHeadPhones = 0;
		};
	};
	transportSoldier = 0;
	transportAmmo = 0;
	transportMaxMagazines = 0;
	transportMaxWeapons = 0;
	transportMaxBackpacks = 0;
	isbackpack = 0;
	transportFuel = 0;
	transportRepair = 0;
	transportVehiclesCount = 0;
	transportVehiclesMass = 0;
	class TransportWeapons {};
	class TransportMagazines {};
	attendant = 0;
	engineer = 0;
	uavHacker = 0;
	soundEngine[] = {"", 1, 1};
	soundEnviron[] = {"", 1, 1};
	class SoundEnvironExt {};
	class SoundEquipment {};
	class SoundGear {};
	class SoundBreath {};
	class SoundBreathSwimming {};
	class SoundBreathInjured {};
	class SoundHitScream {};
	class SoundInjured {};
	class SoundBreathAutomatic {};
	class SoundDrown {};
	class SoundChoke {};
	class SoundRecovered {};
	class SoundBurning {};
	class PulsationSound {};
	class SoundDrowning {};
	soundCrash[] = {"", 0.316228, 1};
	soundLandCrash[] = {"", 1, 1};
	soundWaterCrash[] = {"", 0.177828, 1};
	soundGetIn[] = {"", 0.000316228, 1};
	soundGetOut[] = {"", 0.000316228, 1};
	soundServo[] = {"", 0.00316228, 0.5};
	soundElevation[] = {"", 0.00316228, 0.5};
	sounddamage[] = {"", 1, 1};
	soundEngineOnInt[] = {"", 1, 1};
	soundEngineOffInt[] = {"", 1, 1};
	soundEngineOnExt[] = {"", 1, 1};
	soundEngineOffExt[] = {"", 1, 1};
	soundGearUp[] = {"", 1, 1};
	soundGearDown[] = {"", 1, 1};
	soundFlapsUp[] = {"", 1, 1};
	soundFlapsDown[] = {"", 1, 1};
	cabinOpenSound[] = {"", 1, 1};
	cabinCloseSound[] = {"", 1, 1};
	cabinOpenSoundInternal[] = {"", 1, 1};
	cabinCloseSoundInternal[] = {"", 1, 1};
	soundCrashes[] = {"soundCrash", 1};
	soundLandCrashes[] = {"soundLandCrash", 1};
	soundWaterCrashes[] = {"soundWaterCrash", 1};
	emptySound[] = {"", 0, 1};
	soundWoodCrash[] = {"emptySound", 0};
	soundBushCrash[] = {"emptySound", 0};
	soundBuildingCrash[] = {"emptySound", 0};
	soundArmorCrash[] = {"emptySound", 0};
	soundLocked[] = {"", 1, 1};
	soundIncommingMissile[] = {"", 1, 1};
	soundDammage[] = {"", 1, 1};
	typicalCargo[] = {};
	class Reflectors {};
	aggregateReflectors[] = {};
	getInAction = "";
	getOutAction = "";
	driverAction = "";
	driverInAction = "";
	cargoGetInAction[] = {};
	cargoGetOutAction[] = {};
	cargoAction[] = {};
	cargoIsCoDriver[] = {0};
	driverCompartments = "Compartment1";
	cargoCompartments[] = {"Compartment1"};
	driverOpticsModel = "";
	driverOpticsEffect[] = {};
	driverOpticsColor[] = {1, 1, 1, 1};
	hideProxyInCombat = 0;
	forceHideDriver = 0;
	canHideDriver = -1;
	castDriverShadow = 0;
	castCargoShadow = 0;
	viewDriverShadow = 1;
	viewDriverShadowDiff = 1;
	viewDriverShadowAmb = 1;
	viewCargoShadow = 1;
	viewCargoShadowDiff = 1;
	viewCargoShadowAmb = 1;
	ejectDeadDriver = 0;
	ejectDeadCargo = 0;
	crew = "Civilian";
	hiddenSelections[] = {};
	hiddenSelectionsTextures[] = {};
	hiddenSelectionsMaterials[] = {};
	hiddenUnderwaterSelections[] = {};
	shownUnderWaterSelections[] = {};
	hiddenUnderwaterSelectionsTextures[] = {};
	class FxExplo {
		access = 1;
	};
	class AnimationSources {};
	selectionFireAnim = "";
	class GunFire: WeaponFireGun {
		// WeaponFireGun
		access = 0;
		cloudletDuration = 0.2;
		cloudletAnimPeriod = 1;
		cloudletSize = 1;
		cloudletAlpha = 1;
		cloudletGrowUp = 0.2;
		cloudletFadeIn = 0.01;
		cloudletFadeOut = 0.5;
		cloudletAccY = 0;
		cloudletMinYSpeed = -100;
		cloudletMaxYSpeed = 100;
		cloudletShape = "cloudletFire";
		cloudletColor[] = {1, 1, 1, 0};
		interval = 0.01;
		size = 3;
		sourceSize = 0.5;
		timeToLive = 0;
		initT = 4500;
		deltaT = -3000;
		class Table {
			class T0 {
				maxT = 0;
				color[] = {0.82, 0.95, 0.93, 0};
			};
			class T1 {
				maxT = 200;
				color[] = {0.75, 0.77, 0.9, 0};
			};
			class T2 {
				maxT = 400;
				color[] = {0.56, 0.62, 0.67, 0};
			};
			class T3 {
				maxT = 600;
				color[] = {0.39, 0.46, 0.47, 0};
			};
			class T4 {
				maxT = 800;
				color[] = {0.24, 0.31, 0.31, 0};
			};
			class T5 {
				maxT = 1000;
				color[] = {0.23, 0.31, 0.29, 0};
			};
			class T6 {
				maxT = 1500;
				color[] = {0.21, 0.29, 0.27, 0};
			};
			class T7 {
				maxT = 2000;
				color[] = {0.19, 0.23, 0.21, 0};
			};
			class T8 {
				maxT = 2300;
				color[] = {0.22, 0.19, 0.1, 0};
			};
			class T9 {
				maxT = 2500;
				color[] = {0.35, 0.2, 0.02, 0};
			};
			class T10 {
				maxT = 2600;
				color[] = {0.62, 0.29, 0.03, 0};
			};
			class T11 {
				maxT = 2650;
				color[] = {0.59, 0.35, 0.05, 0};
			};
			class T12 {
				maxT = 2700;
				color[] = {0.75, 0.37, 0.03, 0};
			};
			class T13 {
				maxT = 2750;
				color[] = {0.88, 0.34, 0.03, 0};
			};
			class T14 {
				maxT = 2800;
				color[] = {0.91, 0.5, 0.17, 0};
			};
			class T15 {
				maxT = 2850;
				color[] = {1, 0.6, 0.2, 0};
			};
			class T16 {
				maxT = 2900;
				color[] = {1, 0.71, 0.3, 0};
			};
			class T17 {
				maxT = 2950;
				color[] = {0.98, 0.83, 0.41, 0};
			};
			class T18 {
				maxT = 3000;
				color[] = {0.98, 0.91, 0.54, 0};
			};
			class T19 {
				maxT = 3100;
				color[] = {0.98, 0.99, 0.6, 0};
			};
			class T20 {
				maxT = 3300;
				color[] = {0.96, 0.99, 0.72, 0};
			};
			class T21 {
				maxT = 3600;
				color[] = {1, 0.98, 0.91, 0};
			};
			class T22 {
				maxT = 4200;
				color[] = {1, 1, 1, 0};
			};
		};
	};
	class GunClouds: WeaponCloudsGun {
		// WeaponCloudsGun
		access = 0;
		cloudletDuration = 0.3;
		cloudletAnimPeriod = 1;
		cloudletSize = 1;
		cloudletAlpha = 1;
		cloudletGrowUp = 1;
		cloudletFadeIn = 0.01;
		cloudletFadeOut = 1;
		cloudletAccY = 0.4;
		cloudletMinYSpeed = 0.2;
		cloudletMaxYSpeed = 0.8;
		cloudletShape = "cloudletClouds";
		cloudletColor[] = {1, 1, 1, 0};
		interval = 0.05;
		size = 3;
		sourceSize = 0.5;
		timeToLive = 0;
		initT = 0;
		deltaT = 0;
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1, 1, 1, 0};
			};
		};
	};
	class MGunClouds: WeaponCloudsMGun {
		// WeaponCloudsMGun
		access = 0;
		cloudletGrowUp = 0.05;
		cloudletFadeIn = 0;
		cloudletFadeOut = 0.1;
		cloudletDuration = 0.05;
		cloudletAnimPeriod = 1;
		cloudletSize = 1;
		cloudletAlpha = 0.3;
		cloudletAccY = 0;
		cloudletMinYSpeed = -100;
		cloudletMaxYSpeed = 100;
		cloudletShape = "cloudletClouds";
		cloudletColor[] = {1, 1, 1, 0};
		timeToLive = 0;
		interval = 0.02;
		size = 0.3;
		sourceSize = 0.02;
		initT = 0;
		deltaT = 0;
		class Table {
			class T0 {
				maxT = 0;
				color[] = {1, 1, 1, 0};
			};
		};
	};
	// All
	class Damage {
		tex[] = {};
		mat[] = {};
	};
	selectionDamage = "zbytek";
	HeadAimDown = 0;
	cargoCanEject = 1;
	driverCanEject = 1;
	fireResistance = 10;
	airCapacity = 10;
	waterResistance = 10;
	waterDamageEngine = 0.2;
	maxFordingDepth = 1;
	impactEffectsSea = "ImpactEffectsSea";
	damageTexDelay = 0;
	slingLoadCargoMemoryPoints[] = {};
	slingLoadCargoMemoryPointsDir[] = {};
	numberPhysicalWheels = 0;
	damageHalf[] = {};
	damageFull[] = {};
	class camShakeGForce {
		power = 1;
		frequency = 20;
		distance = 0;
		minSpeed = 1;
		duration = 3;
	};
	minGForce = 0.2;
	maxGForce = 2;
	gForceShakeAttenuation = 0.5;
	class camShakeDamage {
		power = 0.5;
		frequency = 60;
		distance = -1;
		minSpeed = 1;
		attenuation = 0.5;
		duration = 3;
	};
	weaponsGroup1 = "1 + 2";
	weaponsGroup2 = 4;
	weaponsGroup3 = "8 + 16 + 32";
	weaponsGroup4 = "64 + 128";
	soundTurnIn[] = {"", 0.000316228, 1};
	soundTurnOut[] = {"", 0.000316228, 1};
	soundTurnInInternal[] = {"", 0.000316228, 1};
	soundTurnOutInternal[] = {"", 0.000316228, 1};
	features = "";
	class SpeechVariants {
		class Default {
			speechSingular[] = {"veh_unknown_s"};
			speechPlural[] = {"veh_unknown_p"};
		};
	};
	textSingular = "unknown";
	textPlural = "unknown";
	insideDetectCoef = 0.05;
	*/
};
