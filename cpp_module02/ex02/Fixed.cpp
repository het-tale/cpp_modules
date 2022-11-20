/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 06:43:44 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/20 10:19:15 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called\n";
	this->fixed_point = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
	//std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	//std::cout << "Copy assignment operator called\n";
	this->fixed_point = fixed.fixed_point;
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called\n";
	return (this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point = raw;
}

Fixed::Fixed(const int int_fixed_point)
{
	//std::cout << "Int constructor called\n";
	this->fixed_point = int_fixed_point << this->fract_bits;
}

Fixed::Fixed(const float float_fixed_point)
{
	//std::cout << "Float constructor called\n";
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

bool Fixed::operator> (const Fixed& fixed) const
{
	if (this->fixed_point > fixed.fixed_point)
		return (true);
	else
		return (false);
}

bool Fixed::operator< (const Fixed& fixed) const
{
	if (this->fixed_point < fixed.fixed_point)
		return (true);
	else
		return (false);
}

bool Fixed::operator>= (const Fixed& fixed)
{
	if (this->fixed_point >= fixed.fixed_point)
		return (true);
	else
		return (false);
}

bool Fixed::operator<= (const Fixed& fixed)
{
	if (this->fixed_point <= fixed.fixed_point)
		return (true);
	else
		return (false);
}

bool Fixed::operator!= (const Fixed& fixed)
{
	if (this->fixed_point != fixed.fixed_point)
		return (true);
	else
		return (false);
}

bool Fixed::operator== (const Fixed& fixed)
{
	if (this->fixed_point == fixed.fixed_point)
		return (true);
	else
		return (false);
}

Fixed Fixed::operator+ (const Fixed& fixed)
{
	Fixed third;

	third.fixed_point = this->fixed_point + fixed.fixed_point;
	return (third);
}

Fixed Fixed::operator- (const Fixed& fixed)
{
	Fixed third;

	third.fixed_point = this->fixed_point - fixed.fixed_point;
	return (third);
}

Fixed Fixed::operator* (const Fixed& fixed)
{
	Fixed third;

	third.fixed_point = (this->fixed_point * fixed.fixed_point) / (1 << third.fract_bits);
	return (third);
}

Fixed Fixed::operator/ (const Fixed& fixed)
{
	Fixed third;

	third.fixed_point = (this->fixed_point / fixed.fixed_point) * (1 << third.fract_bits);
	return (third);
}

Fixed Fixed::operator++(int) //post increment
{
	Fixed temp = *this;
	(this->fixed_point)++;
	return (temp);
}

Fixed Fixed::operator++() //pre increment
{
	(this->fixed_point)++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed& temp = *this;
	(this->fixed_point)--;
	return (temp);
}

Fixed Fixed::operator--()
{
	(this->fixed_point)--;
	return (*this);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}