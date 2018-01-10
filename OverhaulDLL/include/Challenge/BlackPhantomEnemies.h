/*
    DARK SOULS OVERHAUL

    Contributors to this file:
        Sean Pesce        -  C++
        Zullie The Witch  -  Original CE script
*/


#pragma once

#ifndef DS1_CHALLENGE_BLACK_PHANTOM_ENEMIES_H_
    #define DS1_CHALLENGE_BLACK_PHANTOM_ENEMIES_H_

#include <vector>
#include "Param/Params.h"

namespace Challenge {
namespace BlackPhantomEnemies {

// Used to store original special effects and draw type for an NPC affected by this challenge mod
struct OriginalNpcData {
    int32_t sp_effect_id4;
    uint8_t draw_type;
};

extern bool active;

// Stores original special effects and draw types for all NPCs affected by this challenge mod
extern std::vector<OriginalNpcData> original_values;

// Applies black phantom visual effects and stat buffs to all enemy NPCs
void enable();

// Restores visual effects and stats to all NPCs affected by this challenge mod
void disable();

// Toggles BlackPhantomEnemies challenge mod
void toggle();


} // namespace BlackPhantomEnemies
} // namespace Challenge

#endif // DS1_CHALLENGE_BLACK_PHANTOM_ENEMIES_H_