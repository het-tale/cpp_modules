/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:58:27 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/17 08:41:54 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void	replace(char *argv[])
{
	std::string		str;
	std::string		search;
	std::string		out_file;
	std::string		replace;
	std::ifstream file;
	std::ofstream replace_file;
	size_t			pos = 0;
	size_t			pp = 0;
	
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::cout << argv[1] << " doesn't exist or doesn't have the right permissions\n";
		return ;
	}
	out_file = argv[1];
	search = argv[2];
	replace = argv[3];
	if (search.empty())
	{
		std::cout << "The first string cannot be empty\n";
		return ;
	}
	replace_file.open(out_file.append(".replace"), std::ios::out);
	while (getline(file, str))
	{
		if (str.empty())
		{
			std::cout << argv[1] << " is empty\n";
			break ;
		}
		while (pos != std::string::npos)
		{
			pos = str.find(search, pp);
			if (pos == std::string::npos)
				break ;
			str.erase(pos, search.size());
			str.insert(pos, replace);
			pp = pp + replace.size();
		}
		replace_file << str;
		if (!file.eof())
			replace_file << "\n";
	}
	file.close();
	replace_file.close();
}
