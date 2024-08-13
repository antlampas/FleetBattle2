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
        std::regex validCoordinates("^[a-jA-J][0-9]$|^[a-jA-J]10$")
        if(std::regex_match(coordinates,validcoordinates))
        {
            std::transform(coordinates.begin(),coordinates.end(),coordinates.begin(),::toupper);
            std::pair<int,int> _decodedCoordinates {coordinates.substr(0,1).stoi()-65,coordinates.substr(1,coordinates.size()-1).stoi()};
            return _decodedCoordinates;
        }
        else
        {
            std::pair<int,int> _decodedCoordinates {-1,-1};
            return _decodedCoordinates;
        }
    }
}