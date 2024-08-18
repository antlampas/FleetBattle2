/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "player.hpp"

namespace fleetBattle
{
     SquareType player::checkShoot(DecodedCoordinates coordinates)
    {
        this->ownBoard.setSquareStatus(coordinates,this->ownBoard.getSquareStatus(coordinates)+32);

        int coordinatesRow    = coordinates.first;
        int coordinatesColumn = coordinates.second;

        for(auto ship: this->deployedShips)
        {
            int shipInitialRow    = ship.first.first;
            int shipEndRow        = ship.second.first;
            int shipInitialColumn = ship.first.second;
            int shipEndColumn     = ship.second.second;
            
            if(isHorizontal(ship))
            {
                int shipRow           = ship.first.first;
                int shipInitialColumn = ship.first.second;
                int shipEndColumn     = ship.second.second;

                if(coordinatesRow == shipInitialRow)
                {
                    if(shipInitialColumn < shipEndColumn)
                    {
                        if(coordinatesColumn >= shipInitialColumn && coordinatesColumn <= shipEndColumn)
                        {
                            this->isShipSunk(ship);
                        }
                    }
                    else
                    {
                        if(coordinatesColumn >= shipEndColumn && coordinatesColumn <= shipInitialColumn)
                        {
                            this->isShipSunk(ship);
                        }
                    }
                }
            }
            else
            {
                int shipInitialRow = ship.first.first;
                int shipEndRow     = ship.second.first;
                int shipColumn     = ship.first.second;

                if(coordinatesColumn == shipInitialColumn)
                {
                    if(shipInitialRow < shipEndRow)
                    {
                        if(coordinatesRow >= shipInitialRow && coordinatesRow <= shipEndRow)
                        {
                            this->isShipSunk(ship);
                        }
                    }
                    else
                    {
                        if(coordinatesRow >= shipEndRow && coordinatesRow <= shipInitialRow)
                        {
                            this->isShipSunk(ship);
                        }
                    }
                }
            }
        }

        return this->ownBoard.getSquareStatus(coordinates);
    }
}