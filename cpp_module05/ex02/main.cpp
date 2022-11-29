/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:21:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 01:25:47 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main( void )
{
	try
	{
		Bureaucrat bu(4, "bureau");
		std::cout << "--------Tests for Shrubbery------------\n";
		ShrubberyCreationForm sh("home");
		std::cout << "The name: " << sh.getName() << std::endl;
		std::cout << "The Signed: " << sh.getSignedGrade() << std::endl;
		std::cout << "The Executed: " << sh.getExecutedGrade() << std::endl;
		ShrubberyCreationForm sh2(sh);
		std::cout << "------------------------------------------------\n";
		std::cout << "The name: " << sh2.getName() << std::endl;
		std::cout << "The Signed: " << sh2.getSignedGrade() << std::endl;
		std::cout << "The Executed: " << sh2.getExecutedGrade() << std::endl;
		std::cout << sh2.getTarget() << std::endl;
		std::cout << sh2.getSigned() << std::endl;
		sh2.beSigned(bu);
		std::cout << sh2.getSigned() << std::endl;
		sh2.execute(bu);
		bu.executeForm(sh);
		std::cout << "--------Tests for robotomy------------\n";
		RobotomyRequestForm robot("target");
		RobotomyRequestForm rob(robot);
		std::cout << "The name: " << rob.getName() << std::endl;
		std::cout << "The Signed: " << rob.getSignedGrade() << std::endl;
		std::cout << "The Executed: " << rob.getExecutedGrade() << std::endl;
		robot.beSigned(bu);
		robot.execute(bu);
		bu.executeForm(rob);
		std::cout << "--------Tests for Presidential------------\n";
		PresidentialPardonForm president1("target");
		PresidentialPardonForm president(president1);
		std::cout << "The name: " << president.getName() << std::endl;
		std::cout << "The Signed: " << president.getSignedGrade() << std::endl;
		std::cout << "The Executed: " << president.getExecutedGrade() << std::endl;
		president.beSigned(bu);
		president.setTarget("targetttttttt");
		president.execute(bu);
		bu.executeForm(president);
		std::cout << president << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}