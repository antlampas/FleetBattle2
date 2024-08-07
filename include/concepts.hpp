/*
 *
 * FALP Fleet Battle 2 © 2024 by Antlampas is licensed under CC BY-SA 4.0. To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/
 *
 */

#ifndef CONCEPTS_HPP
#define CONCEPTS_HPP

#include "types.hpp"

#include <iterator>

namespace fleetBattle
{
    template<typename C,typename T>
    concept BidimensionalContainer  =   requires(C a,const C b)
                                        {
                                            requires std::regular<C>;
                                            requires std::swappable<C>;
                                            requires std::destructible<typename C::value_type>;
                                            requires std::same_as<typename C::reference, typename C::value_type &>;
                                            requires std::same_as<typename C::const_reference, const typename C::value_type &>;
                                            requires std::forward_iterator<typename C::iterator>;
                                            requires std::forward_iterator<typename C::const_iterator>;
                                            requires std::signed_integral<typename C::difference_type>;
                                            requires std::same_as<typename C::difference_type, typename std::iterator_traits<typename C::iterator>::difference_type>;
                                            requires std::same_as<typename C::difference_type, typename std::iterator_traits<typename C::const_iterator>::difference_type>;
                                            { a.begin()    } -> std::same_as<typename C::iterator>;
                                            { a.end()      } -> std::same_as<typename C::iterator>;
                                            { b.begin()    } -> std::same_as<typename C::const_iterator>;
                                            { b.end()      } -> std::same_as<typename C::const_iterator>;
                                            { a.cbegin()   } -> std::same_as<typename C::const_iterator>;
                                            { a.cend()     } -> std::same_as<typename C::const_iterator>;
                                            { a.size()     } -> std::same_as<typename C::size_type>;
                                            { a.max_size() } -> std::same_as<typename C::size_type>;
                                            { a.empty()    } -> std::same_as<bool>;
                                            
                                            C<C<T>>;
                                            new C<C<T>>;
                                        };
    template<typename T>
    concept BoardSquare = std::integral<T>;
}