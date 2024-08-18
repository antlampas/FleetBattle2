/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"
#include <algorithm>

namespace fleetBattle
{
    bool shipsOverlap(ShipPosition ship1,ShipPosition ship2)
    {
        std::vector<DecodedCoordinates> ship1Squares,ship2Squares;

        if(isHorizontal(ship1))
            for(int column=ship1.first.second;column<=ship1.second.second;column++)
                ship1Squares.push_back(DecodedCoordinates(ship1.first.first,column));
        if(isVertical(ship1))
            for(int row=ship1.first.first;row<=ship1.second.first;row++)
                ship1Squares.push_back(DecodedCoordinates(row,ship1.first.second));
        if(isHorizontal(ship2))
            for(int column=ship2.first.second;column<=ship2.second.second;column++)
                ship2Squares.push_back(DecodedCoordinates(ship2.first.first,column));
        if(isVertical(ship2))
            for(int row=ship2.first.first;row<=ship2.second.first;row++)
                ship2Squares.push_back(DecodedCoordinates(row,ship2.first.second));
        if(std::find_first_of(ship1Squares.begin(),ship1Squares.end(),ship2Squares.begin(),ship2Squares.end()) != ship1Squares.end())
            return true;
        else
            return false;
    }
}