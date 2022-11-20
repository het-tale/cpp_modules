/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:40:17 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 00:44:33 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed_point;
		static const int fract_bits = 8;
	public:
		Fixed();
		Fixed(const int int_fixed_point);
		Fixed(const float float_fixed_point);
		Fixed(const Fixed& fixed);
		Fixed& operator= (const Fixed& fixed);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool operator> (const Fixed& fixed) const;
		bool operator< (const Fixed& fixed) const;
		bool operator>= (const Fixed& fixed) const;
		bool operator<= (const Fixed& fixed) const;
		bool operator!= (const Fixed& fixed) const;
		bool operator== (const Fixed& fixed) const;
		Fixed operator+ (const Fixed& fixed);
		Fixed operator- (const Fixed& fixed);
		Fixed operator* (const Fixed& fixed);
		Fixed operator/ (const Fixed& fixed);
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& f1, Fixed& f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);
		
};
std::ostream& operator<< (std::ostream& out, const Fixed& fixed);
#endif