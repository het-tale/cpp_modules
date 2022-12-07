/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:06:21 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/07 01:43:34 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    addOne(int const & a)
{
   std::cout << a * 2 << " ";
}

void    CapiChar(char const & c)
{
    std::cout << c;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char  carr[6] = {'h', 'a', 's', 'n', 'a', 'a'};

    std::cout << "------------Before iter------------\n";
    for (int i = 0; i < 5; i++)
        std::cout << arr[i] << " ";
    
    for (int i = 0; i < 6; i++)
        std::cout << carr[i] << " ";
    std::cout << std::endl;
    std::cout << "------------After iter------------\n";
    ::iter(arr, 5, addOne);

    ::iter(carr, 6, CapiChar);
    std::cout << std::endl;
    return (0);
}
