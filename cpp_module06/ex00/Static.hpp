/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Static.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:56:31 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/05 12:24:41 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef STATIC_HPP
#define STATIC_HPP

#include <iostream>
#include <string>
#include <ctype.h>
#include <cstring>
#include <climits>
#include <typeinfo>


//checkers
bool    isInt(char *str);
bool isFloat(char *str);
bool isDouble(char *str);
void    Convert_all(char *str);
void    print_messages(int inta, char chara, float floata, double doubla);
#endif