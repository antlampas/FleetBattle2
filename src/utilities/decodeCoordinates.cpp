/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"
#include <regex>
#include <algorithm>

namespace fleetBattle
{
    std::pair<int,int> decodeCoordinates(Coordinates coordinates)
    {
        std::regex validCoordinates("^[a-jA-J][0-9]$|^[a-jA-J]10$");
        if(std::regex_match(coordinates,validCoordinates))
        {
            std::transform(coordinates.begin(),coordinates.end(),coordinates.begin(),::toupper);
            std::pair<int,int> _DecodedCoordinates {std::stoi(coordinates.substr(0,1))-65,std::stoi(coordinates.substr(1,coordinates.size()-1))};
            return _DecodedCoordinates;
        }
        else
        {
            std::pair<int,int> _DecodedCoordinates {-1,-1};
            return _DecodedCoordinates;
        }
    }
}