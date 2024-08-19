/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

namespace fleetBattle
{
    void agent::operator()()
    {
        while(!this->stopToken.stop_requested())
        {
            std::string message = this->readMessage();
            
            std::vector<std::string> messageTokens;
        }
    }
}