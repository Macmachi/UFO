/*
* Author : TILK 
* Reminder : If you use my script, please keep this header that credits me
* Thanks to Mr.H for his help!
* Source of sounds : universal-soundbank.com
* Source of visual effect script : AlaskaVet
*/

0 = _this spawn {

	_ufo = _this select 0;

     //delete action on the object (after use)
    _ufo removeAction 0; 

	//add the position of the object's mem (reactor) in a variable
	_emiterpos = _ufo modelToWorld (_ufo selectionPosition "reactor"); 

	//simulates emissive color (during the night)
	_lightBooster1 = "#lightpoint" createVehicleLocal _emiterpos; 
	_lightBooster1 setLightBrightness 0.2; 
	_lightBooster1 setLightAmbient [0.5, 0, 0];
	_lightBooster1 setLightColor [0.5, 0, 0]; 
	_lightBooster1 attachTo [_ufo, [0, 0, 0], "reactor"];

	playSound3D ["UFO\media\sounds\son_ufo.ogg", _ufo, false, getPosASL _ufo, 5, 1, 100]; 

	/*start visual effect script*/

	//close inventory
	closeDialog 0;

	//activate ppEffects we need
	"chromAberration" ppEffectEnable true;
	"radialBlur" ppEffectEnable true;
	enableCamShake true;
		
	//let's go for 6 secs of effetcs
	for "_i" from 0 to 6 do
	{
		"chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
		"chromAberration" ppEffectCommit 1;   
		"radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
		"radialBlur" ppEffectCommit 1;
		addcamShake[random 3, 1, random 3];
		sleep 1;
	};

	//stop effects
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 5;
	"radialBlur" ppEffectAdjust  [0,0,0,0];
	"radialBlur" ppEffectCommit 5;
	sleep 5;

	//deactivate ppEffects
	"chromAberration" ppEffectEnable false;
	"radialBlur" ppEffectEnable false;
	resetCamShake;

	/*end of visual effect script*/

	sleep 1; //break
	deleteVehicle _lightBooster1; // delete first red light
	//simulates emissive color (during the night)
	_lightBooster2 = "#lightpoint" createVehicleLocal _emiterpos; 
	_lightBooster2 setLightBrightness 2; 
	_lightBooster2 setLightAmbient [1, 1, 1];
	_lightBooster2 setLightColor [1, 1, 1]; 
	_lightBooster2 attachTo [_ufo, [0, 0, 0], "reactor"];	
	playSound3D ["UFO\media\sounds\son_ufo_decolle.ogg", _ufo, false, getPosASL _ufo, 5, 1, 300]; 

	_ufo setVelocity [0,0,10];
		[_ufo] spawn {
			params ["_ufo"];
			
			//exponential increase of the velocity of the ufo during 50 iterations
			_startVelocity = 1;
			for "_i" from 1 to 50 do 
				{
					_ufo setVelocity [(vectorUp _ufo select 0)*_i,(vectorUp _ufo select 1) *_i,(vectorUp _ufo select 2)*_i];
					sleep 0.1; //break
					//hint format ["Loop %1 vel %2",str _i, str velocity _ufo]; //debug
				};		
			
		};

	sleep 9; //break
	
	playSound3D ["UFO\media\sounds\son_ufo_fuite.ogg", _ufo, false, getPosASL _ufo, 5, 1, 800]; 
	
	sleep 0.2; //break

	_ufo setVelocity [0,10,10];
	_vel = velocity _ufo;

		[_ufo, _vel] spawn {
			params ["_ufo", "_vel"];
			
			//exponential increase of the velocity of the ufo during 25 iterations
			_startVelocity = 1;
			for "_i" from 50 to 75 do 
				{
					_ufo setVelocity [(_vel select 0)*_i,(_vel select 1) *_i,(_vel select 2)*_i];
					sleep 0.1; //break
					//hint format ["Loop %1 vel %2",str _i, str velocity _ufo]; //debug
				};			
			
		};
		
	sleep 12; //break
	deleteVehicle _lightBooster2; // delete second white light
	deleteVehicle _ufo; // delete object

};
