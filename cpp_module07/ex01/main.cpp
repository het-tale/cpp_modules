/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:06:21 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/04 02:28:42 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int addOne(int a)
{
    return (++a);
}

char    CapiChar(char c)
{
    return ((char)toupper(c));
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char  carr[6] = {'h', 'a', 's', 'n', 'a', 'a'};

    std::cout << "------------Before iter------------\n";
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;
    
    for (int i = 0; i < 6; i++)
        std::cout << carr[i] << std::endl;
    std::cout << "------------After iter------------\n";
    ::iter(arr, 5, addOne);
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << std::endl;

    ::iter(carr, 6, CapiChar);
    for (int i = 0; i < 6; i++)
        std::cout << carr[i] << std::endl;
    return (0);
}
