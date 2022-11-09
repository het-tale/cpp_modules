/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:07:26 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 16:29:37 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
	name = new_name;
	announce();
}

Zombie::~Zombie( void )
{
	std::cout << "The zombie named " << getName() << " has been destroyed\n";
}

std::string	Zombie::getName( void )
{
	return (name);
}

void	Zombie::setName(std::string new_name)
{
	name = new_name;
}

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}
