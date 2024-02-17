
class CfgPatches {
    class vet_test_main_spe {
        author = "veteran29";
        url = "https://github.com/veteran29";
        requiredVersion = 2.14;
        requiredAddons[] = {
            "WW2_SPE_Assets_c_Vehicles_Tanks_c_M4A1"
        };
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
    };
};

class CfgVehicles {
    class Tank;
    class Tank_F: Tank {
        class Turrets;
    };
    class SPE_Tank_base: Tank_F {
        class Turrets: Turrets {
            class MainTurret;
        };
    };
    class SPE_Sherman_base: SPE_Tank_base {};
    class SPE_M4A1_Sherman_base: SPE_Sherman_base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets;
            };
        };
    };
    class SPE_M4A1_Sherman_HullMG_base: SPE_M4A1_Sherman_base {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                class Turrets: Turrets {
                    class CommanderOptics;
                    class Loader_place;
                    class CommanderMG;
                };
            };
            class kurs_MG_turret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class SPE_M4A1_75: SPE_M4A1_Sherman_HullMG_base {};
    class SPE_M4A0_75_Early: SPE_M4A1_75 {};

    class VET_Test_Sherman: SPE_M4A0_75_Early {
        displayName = "M4 VET Test";

        crew = "I_crew_F";
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                gunnerType = "I_crew_F";

                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics {
                        gunnerType = "I_officer_F";
                    };
                    class Loader_place: Loader_place {
                        gunnerType = "I_crew_F";
                    };
                    class CommanderMG: CommanderMG {};
                };
            };
            class kurs_MG_turret: kurs_MG_turret {
                gunnerType = "I_crew_F";
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
};
