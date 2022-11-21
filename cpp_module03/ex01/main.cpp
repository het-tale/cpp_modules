/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 06:56:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 09:58:49 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	clap1("Hasnaa");
	ClapTrap	clap2( clap1);

	std::cout << clap1.getName() << std::endl;
	clap2.setName("Sarsor");
	std::cout << clap2.getName() << std::endl;
	std::cout << clap2.getHit() << std::endl;
	std::cout << clap2.getEnergy() << std::endl;
	std::cout << clap2.getAttack() << std::endl;
	
	clap1.attack(clap2.getName());
	clap2.takeDamage(5);
	std::cout << clap2.getHit() << std::endl;
	clap2.beRepaired(5);
	std::cout << clap2.getHit() << std::endl;
	std::cout << clap2.getEnergy() << std::endl;
	std::cout << clap1.getEnergy() << std::endl;
	return (0);
}