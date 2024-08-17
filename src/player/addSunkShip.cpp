/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "player.hpp"

namespace fleetBattle
{
    ShipPosition addSunkShip(ShipPosition ship)
    {
        if(this->isShipSunk(ship))
        {
            this->sunkShips.push_back(ship);
            return ship;
        }
        else
        {
            return ShipPosition{{0,0},{0,0}};
        }
    }
}