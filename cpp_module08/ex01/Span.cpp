/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:24:56 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/08 19:12:22 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
	span.size() = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span& copy)
{
	*this = span;
}

Span&	Span::operator= (const Span& copy)
{
	if (this = &span)
		return (*this);
	this->N = span.N;
	this->span.clear();
	this->span.assign(copy.span.begin(), copy.span.end());
	return (*this);
}

Span::~Span()
{
	this->span.clear();
}

Span::addNumber(int N)
{
	if (N > this->N)
		throw OutOfRangeException();
	this->span.push_back(N);
}

int Span::shortestSpan()
{
	if (this->span.size() == 0 || this->span.size() == 1)
		throw NotEnoughException();
	std::vector<int> copy;
	copy = this->span;
	std::vector<int>::iterator it;
	std::sort(copy.begin(), copy.end());
	int shortest = copy.at(0);
	for (it = copy.begin() + 1; it != copy.end(); it++)
	{
		if (shortest > *it - *(it - 1))
			shortest = *it - *(it - 1);
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (this->span.size() == 0 || this->span.size() == 1)
		throw NotEnoughException();
	std::vector<int> copy;
	copy = this->span;
	int longest;
	std::sort(copy.begin(), copy.end());
	longest = copy.at(copy.size() - 1) - copy.at(0);
	return (longest);
}

const char* Span::OutOfRangeException::what() const throw()
{
	return "Your are exceeding the allowed number";
}

const char* Span::NotEnoughException::what() const throw()
{
	return "Not enough numbers";
}