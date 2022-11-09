/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:39:18 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 22:13:51 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon weapon;
		std::string name;
	public:
		
		HumanA(std::string init_name, Weapon &init_weapon);
		HumanA();
		void	attack( void );
		Weapon getWeapon( void );
		void	setWeapon(Weapon new_weapon);
		std::string getName( void );
		void	setName(std::string new_name);
};
#endif