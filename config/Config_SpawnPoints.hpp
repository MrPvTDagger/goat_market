/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {

    class Sara {
        class Cop {
            /*class HQ {
                displayName = "G.O.A.T HQ";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
	  class Modest {
                displayName = "Camp Modest";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
           class Corey {
                displayName = "FOB Cory";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
	    class Oregon {
                displayName = "Camp Oregon";
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            }; */
	    class Titan {
                displayName = "Camp Titan";
                spawnMarker = "cop_spawn_5";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
        };   
    };
};
