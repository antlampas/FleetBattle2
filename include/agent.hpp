/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef BOARD_HPP
#define BOARD_HPP

#include "types.hpp"
#include "player.hpp"

#include <thread>
#include <mutex>
#include <future>
#include <vector>
#include <string>

namespace fleetBattle
{
    class agent
    {
        private:
        player _player;
        
        private:
        std::mutex mutex;
        

    };
}