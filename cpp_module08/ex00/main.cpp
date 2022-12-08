/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:05:28 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/08 22:13:34 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myvct(5);

    for (unsigned int i = 0; i < myvct.size(); i++)
        myvct.at(i) = i * 2;
    try
    {
        std::cout << "value found at index: " << easyfind(myvct, 1) << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}
