/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:46:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/08 01:32:08 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#define ERR_VAL -1

template <typename T>
int easyfind(T container, int find)
{
    unsigned int i;

    i = 0;
    while (i < container.size())
    {
        if (container.at(i) == find)
        {
            std::cout << "Found at index " << i << std::endl;
            return (i);
        }
        i++;
    }
    std::cout << "No match for " << find << " Found" << std::endl;
    return (ERR_VAL);
}
#endif