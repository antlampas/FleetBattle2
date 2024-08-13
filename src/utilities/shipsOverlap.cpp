/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"
#include <algorithms>

namespace fleetBattle
{
    bool shipsOverlap(ShipPosition ship1,ShipPosition ship2)
    {
        std::vector<std::pair<int,int>> ship1Squares,ship2Squares;
        std::for_each(ship1.begin(),ship1.end(),[](std::pair<int,int> p) ships1Squares.push_back(p));
        std::for_each(ship2.begin(),ship2.end(),[](std::pair<int,int> p) ships2Squares.push_back(p));
        if(std::find_first_of(ships1Squares.begin(),ships1Squares.end(),ships1Squares.begin(),ships1Squares.end())!=ships1Squares.end())
            return true;
        else
            return false;
    }
}