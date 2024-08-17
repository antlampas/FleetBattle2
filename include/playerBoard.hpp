/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef PLAYERBOARD_HPP
#define PLAYERBOARD_HPP

#include "types.hpp"
#include "board.hpp"

namespace fleetBattle
{
    class playerBoard final : public board
    {
        public:
        playerBoard(BoardType shipsOverlay);
        BoardType  getBoardStatus()                               override;
        SquareType getSquareStatus(DecodedCoordinates)            override;
        SquareType setSquareStatus(DecodedCoordinates,SquareType) override;

        public:
        int sunkShipsCount();

        private:
        BoardType _board;
        BoardType shipsOverlay;
        std::vector<ShipPosition> sunkShips;

        private:
        ShipPosition addSunkShip(ShipPosition);
        bool isShipSunk(DecodedCoordinates);
    };
}

#endif