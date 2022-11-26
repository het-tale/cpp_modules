/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 14:31:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/26 14:14:50 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
		std::string getName( void ) const;
		void	incrementGrade();
		void	decrementGrade();
        class GradeTooHighException : public std::exception
        {
            public:
                const char*   what() const _NOEXCEPT;
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char*   what() const _NOEXCEPT;
        };
        
};
std::ostream& operator<< (std::ostream& out,const Bureaucrat& bureaucrat);
#endif