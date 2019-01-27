/*
    DARK SOULS OVERHAUL

    Contributors to this file:
        Sean Pesce    -  C++
        Metal-Crow    -  C++
        RavagerChris  -  Reverse engineering of game files, gesture cancelling technique
*/

#pragma once

#ifndef _DS1_OVERHAUL_GAME_DATA_H_
    #define _DS1_OVERHAUL_GAME_DATA_H_



#include <stdint.h>

#include "DarkSoulsOverhaulMod.h"
#include "ModData.h"
#include "SP/main.h"
#include "SP/memory.h"
#include "SP/memory/pointer.h"
#include "SP/memory/aob_scan.h"
#include "Asset/Animation/Tae.h"


enum DS1_GAME_VERSION_ENUM {
    DS1_VERSION_DEBUG = 0x2C,           // 44
    DS1_VERSION_STEAM_BETA = 0x2D,      // 45
    DS1_VERSION_RELEASE = 0x2E,         // 46
    DS1_VERSION_OVERHAUL = 0x3C,        // 60
    DS1_VERSION_OVERHAUL_CHEATS = 0x3D, // 61     // Multiplayer network for Overhaul players that have cheats enabled
    DS1_VERSION_REKINDLED = 0x55,       // 85
    DS1_VERSION_REKINDLED_CHEATS = 0x56 // 86     // Multiplayer network for Rekindled players that have cheats enabled
};

enum DS1_PLAYER_STATUS_ENUM {
    DS1_PLAYER_STATUS_LOADING = -1,
    DS1_PLAYER_STATUS_HUMAN = 0,
    DS1_PLAYER_STATUS_COOP = 1,
    DS1_PLAYER_STATUS_INVADER = 2,
    DS1_PLAYER_STATUS_HOLLOW = 8
};

enum TAE_type0_param_values {
    cancel_by_atk = 4,
    lock_rotation = 7,
    activate_iframes = 8,
    cancel_by_moving = 11,
    cancel_by_left_atk = 16,
    cancel_by_left_block = 22,
    cancel_by_rolling_or_backstepping = 26,
    cancel_by_using_consumable = 31,
    cancel_by_two_handing = 32,
    allow_animation_cancel_events = 87,
    cap_movement_to_walk_speed = 90,
};


class Game
{
public:

    ////////////////////////////////////////
    ////////////// GAME DATA ///////////////
    ////////////////////////////////////////

    // Base address of Dark Souls game process
    static uint64_t ds1_base;

    // Base address of fmod_event64 dll process
    static uint64_t fmod_event64_base;

    // Base address for player character data
    static uint64_t player_char_base;

    // Base address for world character data
    static uint64_t world_char_base;

    // Base address for world character data
    static uint64_t char_class_base;

    static uint64_t frpg_net_base;

    // Player character status (loading, human, co-op, invader, hollow)
    static sp::mem::pointer<int32_t> player_char_status;

    // Time Action Events for the player character's animations
    static Tae player_tae;

    // Flag to determine if any characters have been loaded since the game was launched (useful if player had a character loaded but returned to main menu)
    static bool characters_loaded;

    // Address of lava brightness effect (used for dimming lava)
    static uint8_t *lava_luminosity;

    // Game saving on/off
    static sp::mem::pointer<uint8_t> saves_enabled;

    // Multiplayer node count
    static int node_count;



    /////////////////////////////////////////
    /////////////// FUNCTIONS ///////////////
    /////////////////////////////////////////

    // Initializes pointers and base addresses required for most other functions
    static void init();

    // Initialize the pointer to the TAE struture. This isn't loaded until around the time the main menu is hit, so needs to be delayed
    static void init_tae();

    // Runs tasks that were deferred until a character was loaded
    static void on_first_character_loaded();

    // Performs tasks that must be rerun after any loading screen
    static void on_reloaded();

    // Obtains the current game version number
    static uint8_t get_game_version();

    // Changes the game version number to avoid compatibility issues with different game builds
    static void set_game_version(uint8_t version_number);

    // Checks if the player is stuck at the bonfire, and if so, automatically applies the bonfire input fix
    static void check_bonfire_input_bug();

    // Fixes input bug that causes players to be stuck at a bonfire (usually after turning human with framerate unlocked)
    static int fix_bonfire_input(bool print_to_text_feed = false, bool print_to_console = false);

    // Check if dim lava mod is currently active
    static bool dim_lava_enabled();

    // Dim lava effects or restore default lava visuals
    static void enable_dim_lava(bool dim);

    // Returns multiplayer node count as an int (or -1 if player is not online)
    static int get_node_count();

    // Checks if armor sound effects are enabled
    static bool armor_sfx_enabled();

    // Toggles armor sound effecs
    static void enable_armor_sfx(bool enable);

    // Enables/Disables automatic game disconnection when low framerate is detected
    static void enable_low_fps_disconnect(bool enable);

    // Set the current animation speed for the player character
    static void set_current_player_animation_speed(float speed);

    // Returns current player character body animation ID (attacking, rolling, gestures, etc)
    static int32_t get_player_body_anim_id();

    static int32_t get_player_upper_body_anim_id();

    static int32_t get_player_lower_body_anim_id();

    // Return pointer to current game time in milliseconds since the game has started
    static uint32_t* get_game_time_ms();

	static uint64_t get_pc_entity_pointer();

	static float * get_pc_position();


                    /////////////////////////////////////////
                    //////////////// PATCHES ////////////////
                    /////////////////////////////////////////

    // Set available pool of memory that Dark Souls allocates for itself
    static void set_memory_limit();

    // Allow effect IDs to be transferred between clients without bounds restrictions
    static void unrestrict_network_synced_effectids();

    static float new_hpbar_max;

    // Fix the bug where the player HP could be greater than the displayed GUI bar
    static void increase_gui_hpbar_max();

	static uint32_t left_hand_weapon();

    static uint32_t right_hand_weapon();

	static int32_t get_player_char_status();

	static uint32_t get_player_char_max_hp();

	static float get_entity_rotation(void * entity_ptr);

	static int32_t get_area_id();

    static int32_t* get_mp_id_ptr();

    static int32_t* get_saved_chars_menu_flag();

    static uint8_t* get_saved_chars_preview_data();

    /*
     * Help speedup some functions by, whenever we're loaded into an area,
     * preload/preresolve some pointers and values so they can be much more quickly read when we need them
     * This function should be called whenever an area is loaded (after player status changes from loading)
    */
	static void preload_function_caches();

    // Two-part patch to increase the multiplayer phantom limit:
    static void increase_phantom_limit1(); // Called from on_process_attach()
    static void increase_phantom_limit2(); // Called from initialize_plugin()




                    /////////////////////////////////////////
                    ////////////// HUD-RELATED //////////////
                    /////////////////////////////////////////

    class Hud {
    public:

        // Additional HUD elements
        static bool get_show_compass_radial();
        static void set_show_compass_radial(bool enable);
        static bool get_show_compass_bar();
        static void set_show_compass_bar(bool enable);
        static bool get_show_elevation_meter();
        static void set_show_elevation_meter(bool enable);
        static bool get_show_node_graph();
        static void set_show_node_graph(bool enable, bool game_flag_only = true);
    };



                    /////////////////////////////////////////
                    ////////////// FILE-RELATED /////////////
                    /////////////////////////////////////////
};
typedef Game::Hud Hud;



#endif // _DS1_OVERHAUL_GAME_DATA_H_
