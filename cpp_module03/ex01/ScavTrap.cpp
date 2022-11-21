/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:20:11 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 18:56:00 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : _hit_points(100), _energy_points(50), _attack_damage(20)
{
	std::cout << "ScavTrap  parametric constructor called\n";
	this->_name = name;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = scav;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& scav)
{
	this->_name = scav.getName();
	this->_hit_points = scav.getHit();
	this->_energy_points = scav.getEnergy();
	this->_attack_damage = scav.getAttack();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode\n";
}

void ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_energy_points--;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << this->getName() << " repairs himself getting " << amount << " hit points back\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_hit_points += amount;
	this->_energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->getName() << " take " << amount << " points of damage\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_hit_points -= amount;
}
