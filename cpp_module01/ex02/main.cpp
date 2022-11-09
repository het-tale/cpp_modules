/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:10:35 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 18:31:38 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string br = "HI THIS IS BRAIN";
	std::string* stringPTR = &br;
	std::string &stringREF = br;
	std::cout << &br << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << br << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
}