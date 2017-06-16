waitUntil {!isServer && !isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["changelog","Change Log"];
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
