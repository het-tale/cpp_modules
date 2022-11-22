/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:56:48 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 06:13:33 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal's Default constructor called\n";
    this->type = "Animal";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal's parametric constructor called\n";
    this->type = type;
}

Animal::Animal(const Animal& animal)
{
    std::cout << "Animal's copy constructor called\n";
    *this = animal;
}

Animal& Animal::operator= (const Animal& animal)
{
    this->type = animal.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal's Desructor called\n";
}

std::string Animal::getType( void ) const
{
    return (this->type);
}

void    Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "I can make sound\n";
}