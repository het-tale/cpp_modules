/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 06:56:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 01:39:04 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	clap1("Hasnaa");
	ClapTrap	clap2( clap1);
	ScavTrap	scav1("aylol");
	FragTrap	frag1("fraggy");

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
	frag1.highFivesGuys();
	std::cout << frag1.getName() << std::endl;
	frag1.takeDamage(100);
	frag1.takeDamage(100);
	std::cout << frag1.getHit() << std::endl;
	std::cout << frag1.getEnergy() << std::endl;
	std::cout << frag1.getAttack() << std::endl;
	return (0);
}