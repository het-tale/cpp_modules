/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:05:13 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 01:35:09 by het-tale         ###   ########.fr       */
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
	std::cout << "FragTrap "<< this->_name << " destroyed\n";
}

void    FragTrap::highFivesGuys( void )
{
    std::cout << "High five me guyyyyyys!\n";
}

