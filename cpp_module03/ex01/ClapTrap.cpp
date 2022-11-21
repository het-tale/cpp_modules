/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 06:04:34 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 20:39:43 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called\n";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap parametric constructor called\n";
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = clap;
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& clap)
{
	this->_name = clap.getName();
	this->_hit_points = clap.getHit();
	this->_energy_points = clap.getEnergy();
	this->_attack_damage = clap.getAttack();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

std::string ClapTrap::getName( void ) const
{
	return (this->_name);
}

int	ClapTrap::getHit( void) const
{
	return (this->_hit_points);
}

int	ClapTrap::getEnergy( void ) const
{
	return (this->_energy_points);
}

int ClapTrap::getAttack( void ) const
{
	return (this->_attack_damage);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setEnergy(int energyPoints)
{
	this->_energy_points = energyPoints;
}

void	ClapTrap::setAttack(int attackDamage)
{
	this->_attack_damage = attackDamage;
}

void	ClapTrap::setHit(int hitPoints)
{
	this->_hit_points = hitPoints;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " repairs himself getting " << amount << " hit points back\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_hit_points += amount;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->getName() << " take " << amount << " points of damage\n";
	if (!this->getEnergy() || !this->getHit())
		return ;
	this->_hit_points -= amount;
}
