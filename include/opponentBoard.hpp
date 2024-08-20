/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef OPPONENTBOARD_HPP
#define OPPONENTBOARD_HPP

#include "types.hpp"
#include "board.hpp"

#include <ranges>

namespace fleetBattle
{
    class opponentBoard final : public board
    {
        public:
        opponentBoard();
        BoardType  getBoardStatus()                               override;
        SquareType getSquareStatus(DecodedCoordinates)            override;
        SquareType setSquareStatus(DecodedCoordinates,SquareType) override;
        
        private:
        BoardType _board;
    };
}

#endif