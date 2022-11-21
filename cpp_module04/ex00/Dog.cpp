/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:19:15 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 21:35:43 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog's Default constructor called\n";
    this->type = "Dog";
}

Dog::Dog(std::string type)
{
    std::cout << "Dog's parametric constructor called\n";
    this->type = type;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
    std::cout << "Dog's copy constructor called\n";
    *this = dog;
}

Dog& Dog::operator= (const Dog& dog)
{
    this->type = dog.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog's Desructor called\n";
}

void    Dog::setType(std::string type)
{
    this->type = type;
}

void Dog::makeSound()
{
    std::cout << "Bark\n";
}