/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 00:05:00 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 16:27:57 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include<string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce( void );
		std::string	getName( void );
		void	setName(std::string name);
};
Zombie* newZombie(std::string name);
void randomChump( std::string name );
#endif