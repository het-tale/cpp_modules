/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:33:24 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/09 18:50:51 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string init_type);
		std::string getType( void );
		void	setType(std::string new_type);
};