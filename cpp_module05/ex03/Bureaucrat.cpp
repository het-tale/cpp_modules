/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:43:32 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 02:24:07 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("DEFAULT")
{
	std::cout << "Bureaucrat: "<< this->_name <<" default constructor called\n";
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
	this->_grade = grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& bureaucrat)
{
	this->_grade = bureaucrat._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat._name)
{
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << this->getName() << " has been destroyed\n";
}

int	Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

std::string Bureaucrat::getName( void ) const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade( void )
{
	this->_grade--;
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrementGrade( void )
{
	this->_grade++;
	if (this->_grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void	Bureaucrat::signForm(Form& form)
{
	if (form.getSigned())
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << form.getName() << " because he doesn't want.\n";
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (this->_grade <= form.getExecutedGrade())
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	else
		std::cerr << this->_name << " couldn't execute " << form.getName() << std::endl;
}

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}