/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:17:47 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 11:02:04 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& dog);
        Dog& operator= (const Dog& dog);
        ~Dog();
        void    setType(std::string type);
        void    makeSound( void ) const;
};
#endif