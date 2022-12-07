/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:05:28 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/07 22:47:36 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> myvct(5);

    for (unsigned int i = 0; i < myvct.size(); i++)
        myvct.at(i) = rand();
    easyfind(myvct, 1144108930);
    easyfind(myvct, 6);
    return (0);
}
