class CfgCloudlets {
	class RHS_FIM92_Fired;
	class EGVAR(common,AA_launcher_effect);

	class GVAR(effect_base): EGVAR(common,AA_launcher_effect) {

	};

	class GVAR(effect_base): RHS_FIM92_Fired {

	};

	class GVAR(effect_fired): GVAR(effect_base) {

	};
};

EGVAR(common,AA_launcher_effect)
class GVAR(effect_fired): EGVAR(common,AA_launcher_effect) {

	class GVAR(effect_fired) {
		simulation = "particles";
		type = QGVAR(effect_fired);
	};
};