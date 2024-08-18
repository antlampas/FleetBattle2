/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "player.hpp"

namespace fleetBattle
{
    inline SquareType player::updateOtherBoard(DecodedCoordinates coordinates,SquareType value)
    {
        this->otherBoard.setSquareStatus(coordinates,value);
        
        return this->otherboard.getSquareStatus(coordinates);
    }
}