execVM "R3F_LOG\init.sqf";
enableSaving [ false, false ];

waitUntil {time > 0};

execVM "statSave\saveFuncs.sqf";
waitUntil {!isNil "saveFuncsLoaded"};

if(isServer) then
{
	_serverHasID = profileNameSpace getVariable ["ss_ServerID",nil];
	if(isNil "_serverHasID") then
	{
		_serverID = str(round((random(100000)) + random 10000));
		profileNameSpace setVariable ["SS_ServerID",_serverID];
	};
	serverID = profileNameSpace getVariable "ss_ServerID";
	publicVariable "serverID";
};
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

StartProgress = true;

waitUntil {!isNil "serverID"};


if(!isDedicated) then
{
	execVM "statSave\loadAccount.sqf";
	execVM "statSave\saveLoop.sqf";
};

call compile preprocessFile "downloadData.sqf";

waitUntil { !isNil "T8L_var_INITDONE" };

if ( !isServer ) exitWith {}; 

sleep 10; // I dont know why, but some sleep is required or the Actions on the Objects wont work ... this is beyond my knowledge 

[ [ laptop01, laptop02, laptop03, laptop04, laptop05, laptop06 ], "T8L_fnc_addActionLaptop", true, true] spawn BIS_fnc_MP;

if (isServer) then {execVM "bulletWindServer.sqf"; execVM "serverSync.sqf";};
execVM "bulletWindClient.sqf";

["unit", 
    //current unit changed (Curator took control of unit)
{
    if (player != (_this select 0)) then {
        player setVariable ["TFAR_controlledUnit",(_this select 0), true];//This tells other players that our position is different
    } else {
        player setVariable ["TFAR_controlledUnit",nil, true];
    };

    TFAR_currentUnit = (_this select 0);
    {

,true] call CBA_fnc_addPlayerEventHandler;};

// "Debug tools"//
//
["click", "onMapSingleClick", { player setPos _pos; }] call BIS_fnc_addStackedEventHandler; 
GroupGUI = compile preprocessFileLineNumbers "DEBUG\group_gui.sqf";
waituntil {!(IsNull (findDisplay 46))};
_keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 219) then {createDialog 'GLO_GROUP_GUI'}"]; 

enableSaving [false, false];

[] execVM "r0ed_SurvivableCrashes\init.sqf"
