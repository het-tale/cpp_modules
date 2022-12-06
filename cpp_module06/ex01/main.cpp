/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 01:02:36 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/06 01:50:52 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data a;
    Data *ptr;
    uintptr_t   unpt;

    ptr = &a;
    a.data = 5;
    unpt = serialize(&a);
    std::cout << "The address of data is: " << &a << std::endl;
    ptr = deserialize(unpt);
    std::cout << "The value of ptr member is: " << ptr->data << std::endl;
    std::cout << "The address of ptr is: " << ptr << std::endl;
    return (0);
}