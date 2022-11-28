/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:21:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 22:06:26 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	bu(1, "hasnaa");
		Bureaucrat	bu2(140, "test");
		Bureaucrat	bu3(bu);
		Bureaucrat	bu4;
		//bu.incrementGrade();
		//bu.decrementGrade();
		bu4.setGrade(11);
		std::cout << bu4 << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}