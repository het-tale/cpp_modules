/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:19:15 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 11:41:42 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog's Default constructor called\n";
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(std::string type)
{
    std::cout << "Dog's parametric constructor called\n";
    this->type = type;
    this->brain = new Brain();
}

Dog::Dog(const Dog& dog)
{
    std::cout << "Dog's copy constructor called\n";
    *this = dog;
}

Dog& Dog::operator= (const Dog& dog)
{
    this->type = dog.getType();
     this->brain = new Brain();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog's Desructor called\n";
    delete (this->brain);
}

void    Dog::setType(std::string type)
{
    this->type = type;
}

void Dog::makeSound() const
{
    std::cout << "Bark\n";
}