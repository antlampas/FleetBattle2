/*
 *
 * FALP Fleet Battle © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef BOARD_HPP
#define BOARD_HPP

#include "concepts.hpp"
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
        SquareType getSquareStatus(std::string);
        SquareType setSquareStatus(std::string,SquareType);
        BoardType  getBoardStatus();

        private:
        BoardType Board;
    };
}