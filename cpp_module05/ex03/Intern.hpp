/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:32:52 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/28 19:17:11 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include "Form.hpp"
class Bureaucrat;
class Form;
class Intern
{
    public:
        Intern();
        Intern(const Intern& intern);
        Intern& operator= (const Intern& intern);
        ~Intern();
        Form*   makeForm(std::string name, std::string target);
};
#endif