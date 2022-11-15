/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 06:24:35 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/15 07:00:15 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	std::string		str;
	std::string		search;
	std::string		replace;
	std::ifstream file;
	std::ofstream replace_file;
	if (argc == 4)
	{
		file.open(argv[1], std::ios::in);
		str = argv[1];
		replace_file.open(str.append(".replace"), std::ios::out);
		search = argv[2];
		replace = argv[3];
		while (getline(file, str))
		{
			
			//replace_file << str << "\n";
		}	
	}
	return (0);
}