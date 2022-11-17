/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 01:52:08 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/17 02:15:49 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
	int level;
	Harl harlito;
	std::string str;

	if (argc == 2)
	{
		str = argv[1];
		level = harlito.getLevel(str);
		switch (level)
		{
			case 0:
				harlito.complain("DEBUG");
				break;
			case 1:
				harlito.complain("INFO");
				break;
			case 2:
				harlito.complain("WARNING");
				break;
			case 3:
				harlito.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
				break;
		}
	}
	else
		std::cout << "Your program must take 2 params\n";
	return (0);
}