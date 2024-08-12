/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef BOARD_HPP
#define BOARD_HPP

#include "types.hpp"

#include <string>

#ifdef TESTBOARD
#define private public
#endif

namespace fleetBattle
{
    template<BidimentionalContainer BoardType,BoardSquare SquareType>
    class board
    {
        public:
        board();
        virtual SquareType getSquareStatus(int row,int column)            = 0;
        virtual SquareType setSquareStatus(int row,int column,SquareType) = 0;
        virtual BoardType  getBoardStatus()                               = 0;
        virtual ~board();
    };
}