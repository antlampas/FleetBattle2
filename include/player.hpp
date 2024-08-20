/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "types.hpp"
#include "playerBoard.hpp"
#include "opponentBoard.hpp"

namespace fleetBattle
{
    class player
    {
        public:
        player() = delete;
        player(std::vector<ShipPosition>);
        SquareType checkShoot(DecodedCoordinates);
        BoardType  checkOwnBoard();
        BoardType  checkOtherBoard();
        SquareType updateOtherBoard(DecodedCoordinates,SquareType);
        ~player();
        
        public:
        int getSunkShipsCount();
        int getDeployedShipsCount();

        private:
        playerBoard               ownBoard;
        opponentBoard             otherBoard;
        std::vector<ShipPosition> sunkShips;
        std::vector<ShipPosition> deployedShips;

        private:
        ShipPosition addSunkShip(ShipPosition);
        bool         isShipSunk(ShipPosition);
        bool         isShipHit(ShipPosition,DecodedCoordinates);
    };
}

#endif