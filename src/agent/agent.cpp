/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

namespace fleetBattle
{
    agent::agent(std::stop_token token,
                    std::mutex mutex,
                    std::shared_ptr<std::vector<std::string>> incomingQueue,
                    std::shared_ptr<std::vector<std::string>> outgoingQueue
                )
    {}
}