/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:40:17 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/18 06:56:44 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	fixed_point;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		Fixed& operator= (const Fixed& fixed);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};
#endif