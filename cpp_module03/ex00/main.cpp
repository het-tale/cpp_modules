/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 06:56:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/21 07:02:27 by het-tale         ###   ########.fr       */
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
	clap2.beRepaired(5);
	std::cout << clap2.getHit() << std::endl;
	return (0);
}