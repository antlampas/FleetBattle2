/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"
#include <regex>
#include <algorithm>

#include <exception>
#include <iostream>

namespace fleetBattle
{
    DecodedCoordinatesType decodeCoordinates(CoordinatesType coordinates)
    {
        std::regex validCoordinates("^[a-jA-J][0-9]$|^[a-jA-J]10$");
        if(std::regex_match(coordinates,validCoordinates))
        {
            std::transform(coordinates.begin(),coordinates.end(),coordinates.begin(),::toupper);
            std::string colStr = coordinates.substr(0,1);
            std::string rowStr = coordinates.substr(1,coordinates.size()-1);
            DecodedCoordinatesType _DecodedCoordinatesType {static_cast<int>(colStr.c_str()[0])-65,std::stoi(rowStr)};
            return _DecodedCoordinatesType;
        }
        else
        {
            DecodedCoordinatesType _DecodedCoordinatesType {-1,-1};
            return _DecodedCoordinatesType;
        }
    }
}