/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 23:24:56 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/08 01:47:52 by het-tale         ###   ########.fr       */
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

Span::Span(const Span& span)
{
	*this = span;
}

Span&	Span::operator= (const Span& span)
{
	this->N = span.N;
	return (*this);
}

Span::~Span()
{
	std::cout << "Span Destructor called\n";
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
	//copy sort
	std::vector<int> copy;
	int arr[5];
	copy = this->span;
	std::sort(copy.begin(), copy.end());
	for (int = 0; i < copy.size(); i++)
	{
		if (i + 1 != copy.size()) //5
			arr[i] = copy.at(i + 1) - copy.at(i);
	}
	
}

int Span::longestSpan()
{
	if (this->span.size() == 0 || this->span.size() == 1)
		throw NotEnoughException();
	//max - min
}

const char* Span::OutOfRangeException::what() const throw()
{
	return "Your are exceeding the allowed number";
}

const char* Span::NotEnoughException::what() const throw()
{
	return "Not enough numbers";
}