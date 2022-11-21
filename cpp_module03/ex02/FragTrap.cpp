/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:05:13 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 20:43:24 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called\n";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap  parametric constructor called\n";
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& frag)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = frag;
}

FragTrap&	FragTrap::operator= (const FragTrap& frag)
{
	this->_name = frag.getName();
	this->_hit_points = frag.getHit();
	this->_energy_points = frag.getEnergy();
	this->_attack_damage = frag.getAttack();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "High five me guyyyyyys!\n";
}

void FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_energy_points--;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << " repairs himself getting " << amount << " hit points back\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_hit_points += amount;
	this->_energy_points--;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->getName() << " take " << amount << " points of damage\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_hit_points -= amount;
}
