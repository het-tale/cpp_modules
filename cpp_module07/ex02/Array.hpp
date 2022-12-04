/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:33:53 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/04 02:48:51 by het-tale         ###   ########.fr       */
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
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& array);
		Array& operator= (const Array& array);
		~Array();
		int	size() const;
}
#endif