class CfgFunctions {
    class ALIVE {
        class UI {
            class flexiMenu_Add {
                description = "Add a type-based menu source. Result: TBA (WIP)";
                file = "\x\alive\addons\ui\flexiMenu\fnc_add.sqf";
            };
            class flexiMenu_Remove {
                description = "Remove a type-based menu source. Result: TBA (WIP)";
                file = "\x\alive\addons\ui\flexiMenu\fnc_remove.sqf";
            };
            class flexiMenu_setObjectMenuSource {
                description = "Set an object's menu source (variable). Result: TBA (WIP)";
                file = "\x\alive\addons\ui\flexiMenu\fnc_setObjectMenuSource.sqf";
            };
            class displayMenu {
                description = "Display various UI menus";
                file = "\x\alive\addons\ui\menu\fnc_displayMenu.sqf";
                RECOMPILE;
            };
            class RscDisplayLoadingALiVE {
                description = "Hook loading screen";
                file = "\x\alive\addons\ui\fnc_RscDisplayLoadingALiVE.sqf";
                RECOMPILE;
            };
            class RscDisplayMPInterruptALiVE {
                description = "Hook MP interrupt screen";
                file = "\x\alive\addons\ui\fnc_RscDisplayMPInterruptALiVE.sqf";
                RECOMPILE;
            };
            class RscDisplayInterruptALiVE {
                description = "Hook SP interrupt screen";
                file = "\x\alive\addons\ui\fnc_RscDisplayInterruptALiVE.sqf";
                RECOMPILE;
            };            
            class copyFactionClasses {
                description = "Copy faction classes from selected objects in 3DEN to clipboard";
                file = "\x\alive\addons\ui\fnc_copyFactionClasses.sqf";
            };
        };
    };
};
