/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 06:56:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 01:25:46 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	clap1("Hasnaa");
	ClapTrap	clap2( clap1);
	ScavTrap	scav1("aylol");

	std::cout << clap1.getName() << std::endl;
	clap2.setName("Sarsor");
	std::cout << clap2.getName() << std::endl;
	std::cout << clap2.getHit() << std::endl;
	std::cout << clap2.getEnergy() << std::endl;
	std::cout << clap2.getAttack() << std::endl;
	clap1.attack(clap2.getName());
	
	std::cout << scav1.getName() << std::endl;
	std::cout << scav1.getHit() << std::endl;
	std::cout << scav1.getEnergy() << std::endl;
	std::cout << scav1.getAttack() << std::endl;

	scav1.attack("someone");
	scav1.guardGate();
	
	return (0);
}
