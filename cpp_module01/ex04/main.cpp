/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 06:24:35 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/17 00:03:09 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char *argv[])
{
	if (argc == 4)
		replace(argv);
	else
		std::cout << "Your program must take 3 arguments!\n";
	return (0);
}