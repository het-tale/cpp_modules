/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 05:23:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/15 06:14:57 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

std::string HumanB::getName()
{
	return (this->name);
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack( void )
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon->getType() << "\n";
}

