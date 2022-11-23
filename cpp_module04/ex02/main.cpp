/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:21:19 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/23 12:16:15 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    Cat kitten;
    Animal* anim = new Dog();

    std::cout << kitten.getType() << std::endl;
    kitten.makeSound();
    anim->makeSound();
    delete anim;
    return 0;
}