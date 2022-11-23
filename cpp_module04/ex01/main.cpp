/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:21:19 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/23 12:17:14 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
   Animal*   animals[4];
   Cat  kitten1("katkota");
   Cat kitten2(kitten1);
   
   kitten1.getBrain()->setIdeas("clever", 0);
   kitten2.getBrain()->setIdeas("lamp", 0);

    std::cout << kitten1.getBrain()->getIdeas(0) << std::endl;
    std::cout << kitten2.getBrain()->getIdeas(0) << std::endl;
   
    for (int i = 0; i < 4; i++)
    {
        if (i < 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
        delete animals[i];
    return 0;
}