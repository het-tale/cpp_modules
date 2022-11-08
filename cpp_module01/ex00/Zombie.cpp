/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:07:26 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 00:14:13 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this.name = name;
}

std::string	Zombie::getName( void )
{
	return (name);
}

void	Zombie::setName(new_name)
{
	name = new_name;
}

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie	*zomb;

	
}