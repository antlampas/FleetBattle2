/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef PLAYERBOARD_HPP
#define PLAYERBOARD_HPP

#include "utilities.hpp"
#include "board.hpp"

namespace fleetBattle
{
    class playerBoard final : public board
    {
        public:
        playerBoard();
        playerBoard(std::vector<ShipPosition>);
        BoardType  getBoardStatus()                               override;
        SquareType getSquareStatus(DecodedCoordinates)            override;
        SquareType setSquareStatus(DecodedCoordinates,SquareType) override;

        private:
        BoardType _board;
        BoardType shipsOverlay;
        
    };
}

#endif