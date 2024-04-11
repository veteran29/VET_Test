
class CfgPatches {
    class vet_test_main_eval {
        author = "veteran29";
        url = "https://github.com/veteran29/VET_Test";
        requiredVersion = 2.14;
        requiredAddons[] = {};
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
    };
};

vet_test_stringtableEval = __EVAL(format ["%1 --- %2", localize "STR_VET_TEST_CAT", localize "STR_VET_TEST_DOG"]);
