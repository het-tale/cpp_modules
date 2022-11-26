/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:21:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/26 11:54:47 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat	bu(3, "hasnaa");
		Bureaucrat	bu2(150, "test");
		bu.incrementGrade();
		bu2.decrementGrade();
		std::cout << bu << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Grade too high\n";
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Grade too low\n";
	}
	
	return (0);
}