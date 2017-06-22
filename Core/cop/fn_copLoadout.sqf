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


this forceAddUniform "TRYK_U_pad_hood_odBK";
this addVest "TRYK_V_ArmorVest_green2";
player  linkItem "ItemMap";
player  linkItem "ItemCompass";
player  linkItem "tf_microdagr";
player  linkItem "tf_anprc152_19";
player  linkItem "ItemGPS";
player  linkItem "ACE_NVG_Gen4";

player  setSpeaker "ace_novoice";

[] call life_fnc_saveGear;

