waitUntil {!isServer && !isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["changelog","Change Log"];
player createDiarySubject ["serverrules","General Rules"];
player createDiarySubject ["policerules","Police Procedures/Rules"];
player createDiarySubject ["safezones","Safe Zones (No Killing)"];
//player createDiarySubject ["civrules","Civilian Rules"];
player createDiarySubject ["illegalitems","Illegal Activity"];
//player createDiarySubject ["gangrules","Gang Rules"];
//player createDiarySubject ["terrorrules","Terrorism Rules"];
player createDiarySubject ["controls","Controls"];

/*  Example
    player createDiaryRecord ["", //Container
        [
            "", //Subsection
                "
TEXT HERE<br/><br/>
                "
        ]
    ];
*/

    player createDiaryRecord ["credits",
        [
            "AsYetUntitled",
                "
AsYetUntitled (formerly ArmaLife) is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["changelog",
        [
            "G.O.A.T Changelog",
                "
Ask Rock, Dagger Or Mike.<br/><br/>
Date: 12. June 2017<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["changelog",
        [
            "Server Change Log",
                "
This section is meant for people doing their own edits to the mission.<br/><br/>
                "
        ]
    ];

    player createDiaryRecord ["controls",
        [
            "General controls",
                "
Y: Open Player Menu.<br/>
U: Lock and unlock vehicles and houses.<br/>
T: Vehicle and Personal storage view<br/>
Left Windows: Main interaction key. Used for interacting with objects like vehicles, houses, ATMs, and restrained players. Can be rebound to a single key like TAB by pressing ESC->Configure->Controls->Custom->Use Action 10.<br/>
0: Holster Weapon
Shift + Spacebar: Jump.<br/>
                "
        ]
    ];
