/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:18:06 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 18:23:26 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("president", 25, 5)
{
	std::cout << "PresidentialPardonForm's default constructor\n";
	this->_target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("president", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& president)
{
	this->_target = president._target;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& president) : Form()
{
	*this = president;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << this->getName() << " has been destroyed\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned() || executor.getGrade() > this->getExecutedGrade())
		throw GradeTooLowException();
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n"; 
}