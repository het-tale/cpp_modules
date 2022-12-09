/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 00:00:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/09 01:06:56 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <stack>
#include <deque>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		MutantStack(){};
		MutantStack(const MutantStack& copy){ *this = copy;};
		MutantStack& operator= (const MutantStack& copy) {this->c = copy.c;};
		~MutantStack() {};
		typedef typename container::iterator iterator;
		iterator begin(){return std::stack<T>::c.begin();};
		iterator end(){return std::stack<T>::c.end();};
};
#endif