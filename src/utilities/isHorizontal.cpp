/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"

namespace fleetBattle
{
    bool isHorizontal(ShipPosition ship)
    {
        if(ship.first.first == ship.second.first && ship.first.second != ship.second.second)
            return true;
        else
            return false;
    }
}