// Simply a package which requires other addons.
class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"ALIVE_main","cba_ui"};
		versionDesc = "ALiVE";
		VERSION_CONFIG;
        author = MODULE_AUTHOR;
		author[] = {"Tupolov"};
        authorUrl = "http://alivemod.com/";
	};
};
