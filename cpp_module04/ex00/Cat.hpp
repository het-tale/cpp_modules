/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:09:00 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 21:23:33 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& cat);
        Cat& operator= (const Cat& cat);
        ~Cat();
        void    setType(std::string type);
        void    makeSound( void );
};
#endif