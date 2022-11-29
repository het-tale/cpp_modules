/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:31:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/29 01:34:38 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"
class Form;
class Bureaucrat
{
    private:
        const std::string _name;
		int	_grade;
    public:
        Bureaucrat();
		Bureaucrat(int grade, std::string name);
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat& operator= (const Bureaucrat& bureaucrat);
        ~Bureaucrat();
		int	getGrade( void ) const;
        void    setGrade(int grade);
		std::string getName( void ) const;
		void	incrementGrade();
		void	decrementGrade();
        void	signForm(Form& form);
        class GradeTooHighException : public std::exception
        {
            public:
                const char*   what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char*   what() const throw();
        };
        void    executeForm(Form const & form);
};
std::ostream& operator<< (std::ostream& out,const Bureaucrat& bureaucrat);
#endif