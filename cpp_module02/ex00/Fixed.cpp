/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:43:44 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/18 07:24:07 by het-tale         ###   ########.fr       */
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
	this->fixed_point = fixed.getRawBits();
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
	std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}
