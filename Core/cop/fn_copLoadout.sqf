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


player  forceAddUniform "TRYK_U_Bts_PCUODs";
player  addVest "V_PlateCarrier2_rgr_noflag_F";
player  addGoggles "TRYK_Shemagh_shade_G";
player  linkItem "ItemMap";
player  linkItem "ItemCompass";
player  linkItem "tf_microdagr";
player  linkItem "tf_anprc152_19";
player  linkItem "ItemGPS";
player  linkItem "ACE_NVG_Gen4";

player  setSpeaker "ace_novoice";

[] call life_fnc_saveGear;
