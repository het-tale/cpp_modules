/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 15:01:24 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 00:43:19 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery", 145, 137)
{
	std::cout << "ShrubberyCreationForm's default constructor\n";
	this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& shrubbery)
{
	this->_target = shrubbery._target;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shrubbery) : Form(shrubbery.getName(), shrubbery.getSignedGrade(), shrubbery.getExecutedGrade())
{
	*this = shrubbery;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << this->getName() << " has been destroyed\n";
}

std::string ShrubberyCreationForm::getTarget( void ) const
{
	return (this->_target);
}

void    ShrubberyCreationForm::setTarget(std::string target)
{
	this->_target = target;
}
 
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned() || executor.getGrade() > this->getExecutedGrade())
		throw GradeTooLowException();
	std::string		s;
	s = this->_target + "_shrubbery";
	std::ofstream	file;
	
	file.open(s.c_str(), std::ios::out);
	if (file.is_open())
	{
		file << "              /|\\               " << std::endl;
		file << "             //|\\\\             " << std::endl;
		file << "            ///|\\\\\\           " << std::endl;
		file << "           /// | \\\\\\           " << std::endl;
		file << "          0 0 ||| 0 0            " << std::endl;
		file << "          ___ ||| ___            " << std::endl;
	}
	file.close();
}