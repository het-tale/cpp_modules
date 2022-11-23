/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 07:49:50 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 07:55:59 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat's Default constructor called\n";
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type)
{
    std::cout << "WrongCat's parametric constructor called\n";
    this->type = type;
}

WrongCat::WrongCat(const WrongCat& wrong_cat) : WrongAnimal(wrong_cat)
{
    std::cout << "WrongCat's copy constructor called\n";
    *this = wrong_cat;
}

WrongCat& WrongCat::operator= (const WrongCat& wrong_cat)
{
    this->type = wrong_cat.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat's Desructor called\n";
}

void    WrongCat::setType(std::string type)
{
    this->type = type;
}

void WrongCat::makeSound() const
{
    std::cout << "Meoww\n";
}