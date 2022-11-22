/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 06:16:50 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 08:00:02 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal's Default constructor called\n";
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal's parametric constructor called\n";
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrong_animal)
{
    std::cout << "WrongAnimal's copy constructor called\n";
    *this = wrong_animal;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& wrong_animal)
{
    this->type = wrong_animal.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal's Desructor called\n";
}

std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void    WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I can make sound\n";
}