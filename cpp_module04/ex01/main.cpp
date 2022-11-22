/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:21:19 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 11:47:08 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
   const Animal*   animals[10];
    const Animal* j = new Dog();
    const Animal* k = new Cat();

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = j;
        else
            animals[i] = k;
    }
    
   delete j;//should not create a leak
   delete k;
    return 0;
}