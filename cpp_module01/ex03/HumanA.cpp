/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:47:36 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/11 02:52:18 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>


HumanA::HumanA(std::string init_name, Weapon &init_weapon): weapon(init_weapon)
{
	name = init_name;
	weapon = init_weapon;
}

std::string HumanA::getName( void )
{
	return (name);
}

void	HumanA::setName(std::string new_name)
{
	name = new_name;
}

void	HumanA::attack( void )
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}
