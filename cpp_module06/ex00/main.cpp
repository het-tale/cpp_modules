/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:58:11 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/05 12:22:42 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Static.hpp"

int main(int argc, char *argv[])
{
    if (argc !=2)
    {
        std::cout << "This program accespt 2 arguments only" << std::endl;
        return (0);
    }
    Convert_all(argv[1]);
    return (0);
}