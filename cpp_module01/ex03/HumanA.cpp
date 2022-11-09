/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:47:36 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 18:51:05 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string init_name, Weapon init_weapon)
{
	name = init_name;
	weapon = init_weapon;
}

void	attack( void )
{
	std::cout << getName() << " attacks with their " << getType() << "\n";
}