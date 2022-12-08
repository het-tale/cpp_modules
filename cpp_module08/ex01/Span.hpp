/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:49:55 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/08 01:39:29 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <functional>

class Span
{
	private:
		unsigned int N;
		std::vector<int> span;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& span);
		Span& operator= (const Span& span);
		~Span();
		void addNumber(int N);
		int	shortestSpan();
		int	longestSpan();
		class OutOfRangeException : public std::exception
		{
			const char* what() const throw();
		};
		class NotEnoughException : public std::exception
		{
			const char* what() const throw();
		};
};

#endif