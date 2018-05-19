/*
Author : TILK 
Reminder : If you use my script, please keep this header that credits me
*/

// delete action on the object (after use)
_this removeAction 0; 

//add the position of the object's mem (reactor) in a variable
_emiterpos = _this modelToWorld (_this selectionPosition "reactor"); 

//simulates emissive color (during the night)
_lightBooster = "#lightpoint" createVehicleLocal _emiterpos; 
_lightBooster setLightBrightness 0.2; 
_lightBooster setLightAmbient [0.5, 0, 0];
_lightBooster setLightColor [0.5, 0, 0]; 
_lightBooster attachTo [_this, [0, 0, 0], "reactor"];

playSound3D ["UFO\media\sounds\son_ufo.ogg", _this, false, getPosASL _this, 1, 1, 100]; 

/*
	Author:AlaskaVet
*/

//Close inventory
closeDialog 0;

//Activate ppEffects we need
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
enableCamShake true;
    
//Let's go for 5secs of effetcs
for "_i" from 0 to 6 do
{
    "chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
    "chromAberration" ppEffectCommit 1;   
    "radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
    "radialBlur" ppEffectCommit 1;
    addcamShake[random 3, 1, random 3];
    sleep 1;
};

//Stop effects
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 5;

//Deactivate ppEffects
"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;

/*
	END visual effect script
*/

sleep 1; //break

playSound3D ["UFO\media\sounds\ufo_decolle.ogg", _this, false, getPosASL _this, 1, 1, 100]; 

_this setVelocity [0,0,10];
	[_this] spawn {
		params ["_this"];
		
		//exponential increase of the velocity of the ufo during 50 iterations
		_startVelocity = 1;
		for "_i" from 1 to 50 do 
			{
			_this setVelocity [(vectorUp _this select 0)*_i,(vectorUp _this select 1) *_i,(vectorUp _this select 2)*_i];
			sleep 0.1; //break
			hint format ["Loop %1 vel %2",str _i, str velocity _this]; //debug
			};		
		
	};
	
sleep 10; //break

playSound3D ["UFO\media\sounds\ufo_fuite.ogg", _this, false, getPosASL _this, 5, 1, 500]; 

_this setVelocity [0,50,30];
_vel = velocity _this;

	[_this, _vel] spawn {
		params ["_this", "_vel"];
		
		//exponential increase of the velocity of the ufo during 50 iterations
		_startVelocity = 1;
		for "_i" from 50 to 100 do 
			{
			_this setVelocity [(_vel select 0)*_i,(_vel select 1) *_i,(_vel select 2)*_i];
			sleep 0.1; //break
			hint format ["Loop %1 vel %2",str _i, str velocity _this]; //debug
			};			
		
	};
	
sleep 5; //break

deleteVehicle _this; // delete object
