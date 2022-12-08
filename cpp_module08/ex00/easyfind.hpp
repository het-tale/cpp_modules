/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:46:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/08 22:12:37 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class NotFoundException: public std::exception
{
    public:
        const char* what() const throw();
};

const char* NotFoundException::what() const throw()
{
    return "Value not found";
}

template <typename T>
int easyfind(T container, int val)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), val);
    unsigned int d = std::distance(container.begin(), it);
    if (it != container.end())
        return (d);
    throw NotFoundException();
}
#endif
