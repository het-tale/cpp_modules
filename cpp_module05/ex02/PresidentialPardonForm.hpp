/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:18:16 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 01:15:37 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Form.hpp"
class Bureaucrat;
class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;
    public:
        PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& president);
        PresidentialPardonForm& operator= (const PresidentialPardonForm& president);
        ~PresidentialPardonForm();
        std::string getTarget( void ) const;
        void    setTarget(std::string target);
		void    execute(Bureaucrat const & executor) const;
};
#endif