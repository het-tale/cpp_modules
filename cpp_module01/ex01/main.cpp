/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:59:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/15 03:06:27 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie*	zozo;
	
	zozo = zombieHorde(5, "hasnaa");
	for (int i = 0; i < 5; i++)
		zozo->announce();
	delete[] zozo;
	return (0);
}