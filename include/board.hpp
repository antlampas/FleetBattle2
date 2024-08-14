/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef BOARD_HPP
#define BOARD_HPP

#include "types.hpp"

#include <string>

namespace fleetBattle
{
    class board
    {
        public:
        virtual BoardType  getBoardStatus()                               = 0;
        virtual SquareType getSquareStatus(DecodedCoordinates)            = 0;
        virtual SquareType setSquareStatus(DecodedCoordinates,SquareType) = 0;
    };
}

#endif