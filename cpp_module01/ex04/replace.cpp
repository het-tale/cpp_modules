/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:58:27 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/17 00:03:48 by het-tale         ###   ########.fr       */
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
	size_t			pos;
	
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
	{
		std::cout << argv[1] << " doesn't exist or doesn't have the right permissions\n";
		return ;
	}
	getline(file, str);
	if (str.empty())
	{
		std::cout << argv[1] << " is empty\n";
		return ;
	}
	out_file = argv[1];
	replace_file.open(out_file.append(".replace"), std::ios::out);
	search = argv[2];
	replace = argv[3];
	while (!str.empty())
	{
		pos = str.find(search);
		if (pos != std::string::npos)
		{
			str.erase(pos, search.size());
			str.insert(pos, replace);
			replace_file << str << "\n";
		}
		getline(file, str);
	}
	file.close();
	replace_file.close();
}