/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

removeAllWeapons player ;
removeAllItems player ;
removeAllAssignedItems player ;
removeUniform player ;
removeVest player ;
removeBackpack player ;
removeHeadgear player ;
removeGoggles player ;

if(name player == "Dagger")then{
player  forceAddUniform "TRYK_U_Bts_PCUODs";
for "_i" from 1 to 4 do {player  addItemToUniform "ACE_CableTie";};
player  addItemToUniform "ACE_EarPlugs";
player  addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {player  addItemToUniform "ACE_tourniquet";};
player  addItemToUniform "ACE_elasticBandage";
player  addVest "V_PlateCarrier2_rgr_noflag_F";
player  addItemToVest "ACE_Flashlight_XL50";
for "_i" from 1 to 2 do {player  addItemToVest "HandGrenade";};
player  addItemToVest "ACE_M84";
player  addItemToVest "SmokeShellRed";
for "_i" from 1 to 2 do {player  addItemToVest "SmokeShell";};
player  addBackpack "B_Kitbag_rgr";
for "_i" from 1 to 2 do {player  addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 30 do {player  addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 2 do {player  addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 4 do {player  addItemToBackpack "ACE_morphine";};
player  addHeadgear "H_Watchcap_camo";
player  addGoggles "TRYK_Shemagh_shade_G";


player  addWeapon "Rangefinder";

player  linkItem "ItemMap";
player  linkItem "ItemCompass";
player  linkItem "tf_microdagr";
player  linkItem "tf_anprc152_19";
player  linkItem "ItemGPS";
player  linkItem "ACE_NVG_Gen4";

player  setSpeaker "ace_novoice";
};

//Example: 
//if(name player == "Username")then{
//player  forceAddUniform "TRYK_U_Bts_PCUODs";
//};
// DON'T FORGET ENDING TAG

[] call life_fnc_saveGear;
