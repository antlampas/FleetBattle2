/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "player.hpp"

#include <algorithm>

namespace fleetBattle
{
    bool isShipSunk(ShipPosition ship)
    {      
        ShipPosition::iterator shipFound = std::find(this->deployedShips.begin(),this->deployedShips.end(),ship);
        
        if(shipFound != this->deployedShips.end())
        {
            for(int row=ship.first.first;row<=ship.second.first;row++)
                for(int column=ship.first.second;column<=ship.second.second;column++)
                    if(this->ownBoard.getSquareStatus(std::make_pair(row,column)) != SquareStatus::SHIP_HIT)
                        return false;
            return true;
            
        }
    }
}