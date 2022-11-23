/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:24:14 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 11:10:50 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain's Default constructor called\n";
}

Brain::Brain(const Brain& brain)
{
    std::cout << "Brain's copy constructor called\n";
    *this = brain;
}

Brain& Brain::operator= (const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.getIdeas(i);
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain's Destructor called\n";
}

std::string Brain::getIdeas(int i) const
{
    return (this->ideas[i]);
}

void    Brain::setIdeas(std::string idea, int i)
{
    this->ideas[i] = idea;
}