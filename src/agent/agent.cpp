/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#include "agent.hpp"

namespace fleetBattle
{
    agent::agent(std::string                              name,
                player                                    p,
                std::stop_token                           stopToken,
                std::shared_ptr<std::mutex>               internalMutex,
                std::shared_ptr<std::queue<std::string>>  internalIncomingQueue,
                std::shared_ptr<std::queue<std::string>>  internalOutgoingQueue,
                std::shared_ptr<std::mutex>               controllerMutex,
                std::shared_ptr<std::queue<std::string>>  controllerIncomingQueue,
                std::shared_ptr<std::queue<std::string>>  controllerOutgoingQueue
                ) : name(name),
                    _player(std::move(p)),
                    stopToken(std::move(stopToken)),
                    internalMutex(std::move(mutex)),
                    intenralIncomingQueue(std::move(incomingQueue)),
                    internalOutgoingQueue(std::move(outgoingQueue)),
                    internalIncomingMessage({}),
                    internalOutgoingMessage({}),
                    controllerMutex(std::move(mutex)),
                    controllerIncomingQueue(std::move(incomingQueue)),
                    controllerOutgoingQueue(std::move(outgoingQueue)),
                    controllerIncomingMessage({}),
                    controllerOutgoingMessage({})
    {}
}