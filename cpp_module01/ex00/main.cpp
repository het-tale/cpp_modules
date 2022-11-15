/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:59:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/15 02:36:34 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie zoz("hasnaa");
	Zombie*	zozo;
	
	zoz.announce();
	zozo = newZombie("sara");
	zozo->announce();
	randomChump("hello");
	delete zozo;
	return (0);
}