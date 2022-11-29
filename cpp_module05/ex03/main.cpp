/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:21:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 02:06:47 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int	main( void )
{
	try
	{
		Intern inter;
		Form* rrf;

		//rrf = inter.makeForm("robotomy request", "Bender");
		// rrf = inter.makeForm("Shrubbery creation", "Home");
		rrf = inter.makeForm("presidential pardon", "hasnaa");
		//rrf = inter.makeForm("Something", "hasnaa");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}