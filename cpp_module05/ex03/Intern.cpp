/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:36:39 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 02:02:52 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern's default constructor called\n";
}

Intern& Intern::operator= (const Intern& intern)
{
    (void)intern;
	return (*this);
}

Intern::Intern(const Intern& intern)
{
	*this = intern;
}

Intern::~Intern()
{
	std::cout << "Intern has been destroyed\n";
}

 Form*   Intern::makeForm(std::string name, std::string target)
 {
    Form *FormObjects[3];
    std::string objcts[3] = {"Shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    int j = 0;
    
    FormObjects[0] = new ShrubberyCreationForm(target);
    FormObjects[1] = new RobotomyRequestForm(target);
    FormObjects[2] = new PresidentialPardonForm(target);
    
    while (i < 3)
    {
        if (name == objcts[i])
        {
            std::cout << "Intern creates " << objcts[i] << std::endl;
            break ;
        }
        i++;
    }
    while (j < 3)
    {
        if (j != i)
            delete FormObjects[j];
        j++;
    }
    if (i < 3)
        return (FormObjects[i]);
    std::cout << name << " is not a valid name" << std::endl;
    return (NULL);
 }
