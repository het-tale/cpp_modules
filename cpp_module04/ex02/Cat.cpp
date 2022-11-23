/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:10:39 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/23 09:26:21 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat's Default constructor called\n";
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(std::string type)
{
    std::cout << "Cat's parametric constructor called\n";
    this->type = type;
    this->brain = new Brain();
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Cat's copy constructor called\n";
    *this = cat;
}

Cat& Cat::operator= (const Cat& cat)
{
    this->type = cat.getType();
    this->brain = new Brain();
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat's Desructor called\n";
    delete (this->brain);
}

void    Cat::setType(std::string type)
{
    this->type = type;
}

void Cat::makeSound() const
{
    std::cout << "Meoww\n";
}

Brain*  Cat::getBrain( void ) const
{
    return (this->brain);
}