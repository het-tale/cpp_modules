/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 05:22:11 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/15 06:14:43 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon*  weapon;
		std::string name;
	public:
		HumanB(std::string name);
		std::string getName();
		void	setName(std::string name);
		Weapon getWeapon( void );
		void setWeapon(Weapon& weapon);
		void attack( void );
};
#endif