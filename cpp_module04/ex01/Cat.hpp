/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:09:00 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/23 09:53:28 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
    private:
        Brain* brain;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& cat);
        Cat& operator= (const Cat& cat);
        ~Cat();
        void    setType(std::string type);
        void    makeSound( void ) const;
        Brain*  getBrain( void ) const;
};
#endif