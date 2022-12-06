/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:33:53 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/07 00:21:29 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T	*arr;
		unsigned int _size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& array);
		Array<T>& operator= (const Array& array);
		T& operator[] (int index);
		~Array();
		unsigned int size() const;
		class OutOfRangeException : public std::exception
        {
            public:
                const char*   what() const throw();
        };
};
#endif