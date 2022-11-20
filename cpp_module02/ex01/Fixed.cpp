/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:43:44 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/20 23:52:44 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->fixed_point = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

Fixed::Fixed(const int int_fixed_point)
{
	std::cout << "Int constructor called\n";
	this->fixed_point = int_fixed_point << this->fract_bits;
}

Fixed::Fixed(const float float_fixed_point)
{
	std::cout << "Float constructor called\n";
	this->fixed_point = roundf(float_fixed_point * (1 << this->fract_bits));
}

float Fixed::toFloat( void ) const
{
	return ((float)(this->fixed_point) / (1 << this->fract_bits));
}

int Fixed::toInt( void ) const
{
	return (this->fixed_point >> this->fract_bits);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}