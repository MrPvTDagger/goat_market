_myBox = _this select 0;
 
    ["AmmoboxInit",[myBox,true]] call BIS_fnc_arsenal;
 
 
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//     Empty VA system
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 
//[_myBox,[true],true] call BIS_fnc_removeVirtualBackpackCargo;
//[_myBox,[true],true] call BIS_fnc_removeVirtualItemCargo;
//[_myBox,[true],true] call BIS_fnc_removeVirtualWeaponCargo;
//[_myBox,[true],true] call BIS_fnc_removeVirtualMagazineCargo;
 
 
    
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//     Backpacks
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 
//[_myBox,[

   //],true] call BIS_fnc_addVirtualBackpackCargo;
 
 
 
    
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//     Items
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 
//[_myBox,[

    //],true] call BIS_fnc_addVirtualItemCargo;
 
 
 
 
 
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//     Weapons
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 
[_mybox,[
	"CUP_arifle_AK107",
	"CUP_arifle_AK107_GL",
	"CUP_arifle_AK47"
    ],true] call BIS_fnc_removeVirtualWeaponCargo;
 
 
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//     Ammunition
// -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    
[myBox,[true],true] call BIS_fnc_addVirtualMagazineCargo;
 
 