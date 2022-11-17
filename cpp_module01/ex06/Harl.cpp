/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 00:26:08 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/17 02:13:28 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

int	Harl::getLevel( std::string level )
{
	std::string	levels[4];
	int		i;

	i = 0;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (i < 4)
	{
		if (levels[i] == level)
			return (i);
		i++;
	}
	return (-1);
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain( std::string level )
{
	void (Harl::*fptr[4]) (void);
	std::string	levels[4];
	int	i;
	
	i = 0;
	fptr[0] = &Harl::debug;
	fptr[1] = &Harl::info;
	fptr[2] = &Harl::warning;
	fptr[3] = &Harl::error;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	while (i < 4)
	{
		if (levels[i] == level)
		{
			while (i < 4)
			{
				std::cout << "[ " << levels[i] << " ]\n";
				(this->*fptr[i]) ();
				i++;
			}
		}
		i++;
	}
}