_me= _this;
GroupThisUnit={
	_indices = lbCurSel 1500;
	_unitName = lbText [1500, _indices];
	lbDelete [1500, _indices];
	hint format["%1",_unitName];
	(missionNamespace getVariable [format ["%1", _unitName], []]) joinAsSilent [player,0];
};
KickThisUnit={
	_indices = lbCurSel 1501;
	_unitName = lbText [1501, _indices];
	lbDelete [1501, _indices];
	hint format["%1",_unitName];
	_unitToKick =[]+ [missionNamespace getVariable [format ["%1", _unitName], []]];
	_unitToKick join grpNull;
};

_nearbyUnits = (position player) nearEntities ["man",10];
_groupUnits = units group player;
_nearbyUnits = _nearbyUnits - _groupUnits;
{
	_unit = str _x;
	lbAdd [1501, _unit];
} forEach _groupUnits;
{
	_unit = str _x;
	lbAdd [1500, _unit];
} forEach _nearbyUnits;