/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

#include <exception>

namespace fleetBattle
{
    bool agent::writeMessage(std::string message)
    {
        //Queue "True": client queue
        //Queue "False": internal queue
        try
        {
            if(queue)
            {
                std::scoped_lock lock(*this->controllerMutex);
                this->controllerOutgoingQueue->push(std::move(message));
                return true;
            }
            }
            else
            {
                std::scoped_lock lock(*this->internalMutex);
                this->internalOutgoingQueue->push(std::move(message));
                return true;
            }
        }
        catch(std::exception e)
        {
            return false;
        }
    }
}
