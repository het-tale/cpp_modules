/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:39:18 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 18:46:49 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumanA(std::string name, Weapon weapon);
		void	attack( void );
		Weapon getWeapon( void );
		void	setWeapon(Weapon new_weapon);
};