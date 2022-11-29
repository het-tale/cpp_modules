/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:01:24 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 02:31:41 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robot", 72, 45)
{
	std::cout << "RobotomyRequestForm's default constructor\n";
	this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robot", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& robot)
{
	this->_target = robot._target;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& robot) : Form(robot.getName(), robot.getSignedGrade(), robot.getExecutedGrade())
{
	*this = robot;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << this->getName() << " has been destroyed\n";
}

std::string RobotomyRequestForm::getTarget( void ) const
{
	return (this->_target);
}

void    RobotomyRequestForm::setTarget(std::string target)
{
	this->_target = target;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned() || executor.getGrade() > this->getExecutedGrade())
		throw GradeTooLowException();
    std::cout << "Zennnnnnnnnnnnnnnnnnnn some noise here\n";
    srand(time(0));
    if (!(rand() % 2))
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "The robotomy failed" << std::endl;
    
}