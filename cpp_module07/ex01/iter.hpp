/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:53:28 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/07 01:35:36 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T* arr, int length, void (*f)(T const &))
{
	for(int i =0; i < length; i++)
		(*f)(arr[i]);
}
#endif