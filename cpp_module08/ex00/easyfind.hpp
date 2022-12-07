/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:46:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/07 18:06:42 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template <typename T>
void    easyfind(T container, int find)
{
    int i;

    i = 0;
    while (i < container.size())
    {
        if (container.at(i) == find)
        {
            std::cout << "Found at index " << i << std::endl;
            return ;
        }
        i++;
    }
    std::cout << "No match for " << find << " Found" << std::endl;
}
#endif