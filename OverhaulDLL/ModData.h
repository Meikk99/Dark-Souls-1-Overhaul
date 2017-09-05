/*
	DARK SOULS OVERHAUL
	
	Contributors to this file:
		Sean Pesce	-	C++
	
*/

#pragma once

#ifndef _DS1_OVERHAUL_MOD_DATA_H_
	#define _DS1_OVERHAUL_MOD_DATA_H_




/////////////////// USER PREFERENCE & KEYBIND CONSTANTS ///////////////////
#define _DS1_OVERHAUL_SETTINGS_FILE_ ".\\d3d9_Mod.ini"
#define _DS1_OVERHAUL_PREFS_SECTION_ "Dark Souls Overhaul Settings"
#define _DS1_OVERHAUL_KEYBINDS_SECTION_ "Dark Souls Overhaul Keybinds"
// Settings:
#define _DS1_OVERHAUL_PREF_SHOW_NODE_COUNT_ "DisplayNodeCount"
// Keybinds:
#define _DS1_OVERHAUL_HOTKEY_BONFIRE_INPUT_FIX_ "BonfireInputFix"
#define _DS1_OVERHAUL_HOTKEY_TOGGLE_NODE_COUNT_ "ToggleNodeCount"

#define _DS1_OVERHAUL_SETTINGS_STRING_BUFF_LEN_ 256		// Length of the string buffer used when obtaining user preference-related string data



////////////////////////////// MOD CONSTANTS //////////////////////////////
#define _DS1_OVERHAUL_KEYPRESS_DELAY_ 200	// Sleep time (in milliseconds) after a keybind function is called, to avoid the keypress being detected multiple times



//////////////////////////// OVERLAY MESSAGES ////////////////////////////
#define _DS1_MOD_MSG_BONFIRE_INPUT_FIX_SUCCESS_ "SUCCESS: Bonfire input fix applied"
#define _DS1_MOD_MSG_BONFIRE_INPUT_FIX_NO_CHAR_FAIL_ "FAILED: Bonfire input fix was not applied (no character loaded)"
#define _DS1_MOD_MSG_BONFIRE_INPUT_FIX_NOT_AT_BONFIRE_FAIL_ "FAILED: Bonfire input fix was not applied (character is not sitting at a bonfire)"
#define _DS1_MOD_MSG_BONFIRE_INPUT_FIX_AUTOMATIC_ "WARNING: Bonfire input glitch detected; applying input fix"


class ModData
{
public:

	// Signifies whether the mod has finished executing the inititalize_plugin() function
	static bool initialized;


	// Cheats on/off. If cheats are enabled, saving and multiplayer are disabled until the game is restarted
	static bool cheats;

	// Determines whether node count is displayed on the overlay text feed info header
	static bool show_node_count;


	// Registers all commands in ConsoleCommands.cpp for use with the in-game console
	static void register_console_commands();

	// Get all user-defined settings preferences from the settings file
	static void get_user_preferences();

	// Get all user-defined keybinds from the settings file
	static void get_user_keybinds();

	// Helper function for get_user_keybinds() that loads the specified keybind from the config file and binds it to the specified function
	static void get_single_user_keybind(const char *keybind_name, int(*function)());
	
};




#endif // _DS1_OVERHAUL_MOD_DATA_H_