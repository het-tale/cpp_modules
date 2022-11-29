/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:57:51 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 00:33:23 by het-tale         ###   ########.fr       */
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
        std::string getTarget( void ) const;
        void    setTarget(std::string target);
		void    execute(Bureaucrat const & executor) const;
};
#endif