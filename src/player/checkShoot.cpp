/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "player.hpp"

namespace fleetBattle
{
     SquareType player::checkShoot(DecodedCoordinatesType coordinates)
    {
        this->ownBoard.setSquareStatus(coordinates,this->ownBoard.getSquareStatus(coordinates)+32);

        int coordinatesRow    = coordinates.first;
        int coordinatesColumn = coordinates.second;

        for(auto ship: this->deployedShips)
            if(this->isShipHit(ship,coordinates))
                if(this->isShipSunk(ship))
                    this->addSunkShip(ship);

        return this->ownBoard.getSquareStatus(coordinates);
    }
}