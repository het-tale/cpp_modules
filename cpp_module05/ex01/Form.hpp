/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 12:09:41 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 23:41:10 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
    private:
        const std::string	_name;
		bool				_signed;
		const int			_signedGrade;
		const int			_excutedGrade;
    public:
        Form();
		Form(std::string name, int signedGrade, int executedGrade);
        Form(const Form& form);
        Form& operator= (const Form& form);
        ~Form();
		int	getSignedGrade( void ) const;
		bool getSigned( void ) const;
		int	getExecutedGrade( void ) const;
		std::string getName( void ) const;
		void	beSigned(Bureaucrat& bureaucrat);
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
};
std::ostream& operator<< (std::ostream& out,const Form& form);
#endif