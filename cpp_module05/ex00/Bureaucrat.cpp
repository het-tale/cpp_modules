/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:43:32 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/26 11:55:36 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat's default constructor called\n";
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

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
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

std::ostream& operator<< (std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}