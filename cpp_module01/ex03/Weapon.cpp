/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:36:33 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 18:43:26 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string init_type)
{
	type = init_type;
}

const std::string Weapon::getType( void )
{
	return (type);
}

void	Weapon::setType(std::string new_type)
{
	type = new_type;
}