/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:44:02 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 17:07:08 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie	*zo;
	
	zo = zombieHorde(15, "Hasnaa");
	for (int i = 0; i < 15; i++)
		zo[i].announce();
	return (0);
}
