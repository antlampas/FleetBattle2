/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

namespace fleetBattle
{
    agent::agent(   std::string                              name;
                    player                                   p;
                    std::stop_token                          stopToken,
                    std::mutex                               mutex,
                    std::shared_ptr<std::deque<std::string>> incomingQueue,
                    std::shared_ptr<std::deque<std::string>> outgoingQueue
                ) : name(name),
                    _player(std::move(p)),
                    stopToken(std::move(stopToken)),
                    mutex(std::move(mutex)),
                    incomingQueue(std::move(incomingQueue)),
                    outgoingQueue(std::move(outgoingQueue)),
                    incomingMessage(),
                    outgoingMessage()
    {}
}