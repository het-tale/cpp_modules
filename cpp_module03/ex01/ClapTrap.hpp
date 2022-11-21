/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 05:58:09 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 06:58:21 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string	_name;
		int	_hit_points;
		int	_energy_points;
		int	_attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clap);
		ClapTrap& operator= (const ClapTrap& clap);
		~ClapTrap();
		std::string getName( void ) const;
		int	getHit( void ) const;
		int	getEnergy( void ) const;
		int	getAttack( void ) const;
		void	setName(std::string name);
		void	setEnergy(int energyPoints);
		void	setAttack(int attackDamage);
		void	setHit(int hitPoints);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif