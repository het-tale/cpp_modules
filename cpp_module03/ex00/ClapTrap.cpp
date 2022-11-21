/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 06:04:34 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 00:08:45 by het-tale         ###   ########.fr       */
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
	std::cout << "copy constructor called\n";
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
	if (!this->getEnergy() || !this->getHit())
	{
		std::cout << "This clapTrap can't attack\n";
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage\n";
	this->_energy_points--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->getEnergy() || !this->getHit())
	{
		std::cout << "This clapTrap can't repair himself\n";
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " repairs himself getting " << amount << " hit points back\n";
	this->_hit_points += amount;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->getHit() || amount > (unsigned int) this->getHit())
	{
		std::cout << "I can't take damage anymore!\n";
		this->_hit_points = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " take " << amount << " points of damage\n";
	this->_hit_points -= amount;
}
