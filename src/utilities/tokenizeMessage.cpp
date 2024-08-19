/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "utilities.hpp"
#include <algorithm>
#include <istream>
#include <sstream>

namespace fleetBattle
{
    std::vector<std::string> tokenizeMessage(std::string message)
    {
        std::vector<std::string> tokens {};
        std::stringstream messageStream {message};

        while(!messageStream.eof()) std::getline(messageStream,tokens," ");

        return tokens;
    }
}