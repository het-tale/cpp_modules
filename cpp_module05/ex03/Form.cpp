/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:09:14 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 16:53:07 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("form"), _signedGrade(150), _excutedGrade(150)
{
	std::cout << "Form's default constructor called\n";
	this->_signed = false;
}

Form::Form(std::string name, int signedGrade, int executedGrade) : _name(name), _signedGrade(signedGrade), _excutedGrade(executedGrade)
{
	this->_signed = false;
	if (this->_signedGrade < 1 || this->_excutedGrade < 1)
		throw GradeTooHighException();
	else if (this->_signedGrade > 150 || this->_excutedGrade > 150)
		throw GradeTooLowException();
}

Form& Form::operator= (const Form& form)
{
	this->_signed = form._signed;
	return (*this);
}

Form::Form(const Form& form) : _name(form._name), _signedGrade(form._signedGrade), _excutedGrade(form._excutedGrade)
{
	*this = form;
}

Form::~Form()
{
	std::cout << this->getName() << " has been destroyed\n";
}

int	Form::getSignedGrade( void ) const
{
	return (this->_signedGrade);
}

std::string Form::getName( void ) const
{
	return (this->_name);
}

bool Form::getSigned( void ) const
{
	return (this->_signed);
}

int	Form::getExecutedGrade( void ) const
{
	return (this->_excutedGrade);
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_signedGrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}
const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream& operator<< (std::ostream& out, const Form& form)
{
	out << form.getName() << ", form signed grade " << form.getSignedGrade() << ", form signed grade " << form.getExecutedGrade();
	return (out);
}