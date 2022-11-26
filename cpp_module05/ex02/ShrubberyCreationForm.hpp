/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:53:44 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/26 15:04:21 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;
    public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        ShrubberyCreationForm& operator= (const ShrubberyCreationForm& form);
        ~ShrubberyCreationForm();
		
};
#endif