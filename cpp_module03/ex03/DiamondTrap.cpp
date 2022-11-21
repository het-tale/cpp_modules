/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:08:21 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 20:31:27 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
    this->_hit_points = FragTrap::getHit();
    this->_energy_points = ScavTrap::getEnergy();
    this->_attack_damage = FragTrap::getAttack();
	std::cout << "DiamondTrap Default constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_hit_points = FragTrap::getHit();
    this->_energy_points = ScavTrap::getEnergy();
    this->_attack_damage = FragTrap::getAttack();
	std::cout << "DiamondTrap  parametric constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond)
{
	std::cout << "DiamondTrap copy constructor called\n";
	*this = diamond;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& diamond)
{
	this->_name = diamond.getName();
	this->_hit_points = diamond.getHit();
	this->_energy_points = diamond.getEnergy();
	this->_attack_damage = diamond.getAttack();
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called\n";
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is: " << this->_name << "and ClapTrap name is: " << ClapTrap::getName() << std::endl;
}