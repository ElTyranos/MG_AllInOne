private "_unit";

_unit = _this select 0;

switch (_this select 1) do {
	case "MIL_TAL" : {
		
		private ["_headgears","_uniforms","_headgear","_uniform","_items","_blacklist_uniform"];
	
		_headgears = [
			"btc_h_afghan_01","H_Shemag_olive","btc_h_afghan_01_2","btc_h_afghan_01_3","btc_h_afghan_01_4","btc_h_afghan_01_5",
			"btc_h_afghan_02","H_Shemag_olive","btc_h_afghan_02_2","btc_h_afghan_02_3","btc_h_afghan_02_4","btc_h_afghan_02_5",
			"btc_h_afghan_03","H_ShemagOpen_tan","btc_h_afghan_03_2","btc_h_afghan_03_3","btc_h_afghan_03_4","btc_h_afghan_03_5",
			"btc_h_afghan_04","H_ShemagOpen_khk","btc_h_afghan_04_2","btc_h_afghan_04_3","btc_h_afghan_04_4","btc_h_afghan_04_5",
			"btc_h_afghan_05","btc_h_afghan_05_2","btc_h_afghan_05_3","btc_h_afghan_05_4","btc_h_afghan_05_5",
			"btc_h_afghan_06","btc_h_afghan_06_2","btc_h_afghan_06_3","btc_h_afghan_06_4","btc_h_afghan_06_5"
		];
		_uniforms = [
			"btc_u_afghan_01","btc_u_afghan_01_2","btc_u_afghan_01_3","btc_u_afghan_01_4","btc_u_afghan_01_5",
			"btc_u_afghan_02","btc_u_afghan_02_2","btc_u_afghan_02_3","btc_u_afghan_02_4","btc_u_afghan_02_5",
			"btc_u_afghan_03","btc_u_afghan_03_2","btc_u_afghan_03_3","btc_u_afghan_03_4","btc_u_afghan_03_5",
			"btc_u_afghan_04","btc_u_afghan_04_2","btc_u_afghan_04_3","btc_u_afghan_04_4","btc_u_afghan_04_5",
			"btc_u_afghan_05","btc_u_afghan_05_2","btc_u_afghan_05_3","btc_u_afghan_05_4","btc_u_afghan_05_5",
			"btc_u_afghan_06","btc_u_afghan_06_2","btc_u_afghan_06_3","btc_u_afghan_06_4","btc_u_afghan_06_5",
			"btc_u_soldier_01","btc_u_soldier_01_2","btc_u_soldier_01_2",
			"btc_u_soldier_02","btc_u_soldier_02_2","btc_u_soldier_02_2",
			"btc_u_soldier_03","btc_u_soldier_03_2","btc_u_soldier_03_2",
			"btc_u_soldier_04","btc_u_soldier_04_2","btc_u_soldier_04_2",
			"btc_u_soldier_05","btc_u_soldier_05_2","btc_u_soldier_05_2",
			"btc_u_soldier_o_01","btc_u_soldier_o_01_2","btc_u_soldier_o_01_2",
			"btc_u_soldier_o_02","btc_u_soldier_o_02_2","btc_u_soldier_o_02_2",
			"btc_u_soldier_o_03","btc_u_soldier_o_03_2","btc_u_soldier_o_03_2",
			"btc_u_soldier_o_04","btc_u_soldier_o_04_2","btc_u_soldier_o_04_2",
			"btc_u_soldier_o_05","btc_u_soldier_o_05_2","btc_u_soldier_o_05_2"
		];
		
		_uniform = _uniforms call BIS_fnc_selectRandom;
		
		_headgear = _headgears call BIS_fnc_selectRandom;
		
		_blacklist_uniform = ["btc_u_soldier_o_02","btc_u_soldier_o_02_2","btc_u_soldier_o_02_2","btc_u_soldier_02","btc_u_soldier_02_2","btc_u_soldier_02_2","btc_u_afghan_04","btc_u_afghan_04_2","btc_u_afghan_04_3","btc_u_afghan_04_4","btc_u_afghan_04_5","btc_u_afghan_05","btc_u_afghan_05_2","btc_u_afghan_05_3","btc_u_afghan_05_4","btc_u_afghan_05_5"];
		
		if (_uniform in _blacklist_uniform) then {_headgear = ""};
		_items = uniformItems _unit;
		
		removeUniform _unit;
		_unit addUniform _uniform;
		
		_unit addHeadGear _headgear;
		
		{_unit addItemToUniform _x} foreach _items;
	};
	case default {};
};
