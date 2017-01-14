private "_unit";

_unit = _this select 0;

switch (_this select 1) do {
	case "MIL_TAL" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"LOP_H_Shemag_TAN","LOP_H_Pakol","LOP_H_Shemag_GRE","LOP_H_Turban","LOP_H_Turban_mask","LOP_H_Shemag_BLK"
		];
		_uniforms = [
			"LOP_U_AM_Fatigue_01_1","LOP_U_AM_Fatigue_01_2","LOP_U_AM_Fatigue_01_3","LOP_U_AM_Fatigue_01_4","LOP_U_AM_Fatigue_01_5","LOP_U_AM_Fatigue_01_6",
			"LOP_U_AM_Fatigue_02_1","LOP_U_AM_Fatigue_02_2","LOP_U_AM_Fatigue_02_3","LOP_U_AM_Fatigue_02_4","LOP_U_AM_Fatigue_02_5","LOP_U_AM_Fatigue_02_6",
			"LOP_U_AM_Fatigue_03_1","LOP_U_AM_Fatigue_03_2","LOP_U_AM_Fatigue_03_3","LOP_U_AM_Fatigue_03_4","LOP_U_AM_Fatigue_03_5","LOP_U_AM_Fatigue_03_6",
			"LOP_U_AM_Fatigue_04_1","LOP_U_AM_Fatigue_04_2","LOP_U_AM_Fatigue_04_3","LOP_U_AM_Fatigue_04_4","LOP_U_AM_Fatigue_04_5","LOP_U_AM_Fatigue_04_6"
		];
		
		_uniform = _uniforms call BIS_fnc_selectRandom;
		
		_headgear = _headgears call BIS_fnc_selectRandom;
		
		_blacklist_uniform = [""];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};
	case default {};
};