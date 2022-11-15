/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 05:02:09 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/15 05:16:34 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
}

std::string HumanA::getName()
{
	return (this->name);
}

void	HumanA::setName(std::string name)
{
	this->name = name;
}

void HumanA::attack( void )
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << "\n";
}