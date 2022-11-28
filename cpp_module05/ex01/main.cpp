/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:21:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 23:47:09 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	bu(4, "hasnaa");
		Form f("ffff", 3, 5);
	
		std::cout << bu << std::endl;
		std::cout << f.getSigned() << std::endl;
		//f.beSigned(bu);
		std::cout << f.getSigned() << std::endl;
		bu.signForm(f);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}