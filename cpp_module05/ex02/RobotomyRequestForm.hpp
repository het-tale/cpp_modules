/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:57:51 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 18:09:53 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Form.hpp"
class Bureaucrat;
class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;
    public:
        RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& robot);
        RobotomyRequestForm& operator= (const RobotomyRequestForm& robot);
        ~RobotomyRequestForm();
		void    execute(Bureaucrat const & executor) const;
};
#endif