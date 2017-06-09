class GLO_GROUP_GUI
{
	idd = -1;
	movingenable = true;
	onLoad = "_this spawn GroupGUI";
	class controls
	{
		class GLO_GROUP_FRAME: RscFrame
		{
			idc = 1800;
			x = 0.510313 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.55 * safezoneH;
		};
		class GLO_GROUP_BACK: IGUIBack
		{
			idc = 2200;
			x = 0.510313 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.195937 * safezoneW;
			h = 0.55 * safezoneH;
			moving = 1;
		};
		class GLO_GROUP_INVITE_LIST: RscListbox
		{
			idc = 1500;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.154 * safezoneH;
		};
		class GLO_GROUP_TEXT2: RscText
		{
			idc = 1000;
			text = "Nearby Players"; //--- ToDo: Localize;
			x = 0.515469 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class GLO_GROUP_INVITE_BUTTON: RscButton
		{
			idc = 1600;
			text = "Invite to Group"; //--- ToDo: Localize;
			x = 0.613437 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "null = [] call GroupThisUnit; closedialog 0 ;createDialog 'GLO_GROUP_GUI';";
		};
		class GLO_GROUP_GROUPLIST: RscListbox
		{
			idc = 1501;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.154 * safezoneH;
		};
		class GLO_GROUP_TEXT1: RscText
		{
			idc = 1001;
			text = "My Group"; //--- ToDo: Localize;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.055 * safezoneH;
		};
		class GLO_GROUP_KICK_BUTTON: RscButton
		{
			idc = 1601;
			text = "Kick"; //--- ToDo: Localize;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = "null = [] call KickThisUnit; closedialog 0 ;createDialog 'GLO_GROUP_GUI';";
		};
		class GLO_GROUP_EXIT_BUTTON: RscButton
		{
			idc = 1602;
			text = "X"; //--- ToDo: Localize;
			x = 0.685625 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closedialog 0;";
		};
		class GLO_GROUP_REFRESH_BUTTON: RscButton
		{
			idc = 1603;
			text = "REFRESH"; //--- ToDo: Localize;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.044 * safezoneH;
			action = " closedialog 0 ;createDialog 'GLO_GROUP_GUI';";
		};
	};
};