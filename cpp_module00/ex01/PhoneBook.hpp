/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:36:35 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 00:04:20 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact contacts[8];
		int		inc;
	public:
		PhoneBook();
		Contact	getContacts(int i);
		void	setContacts(Contact contact, int i);
		int		getInc();
		void	setInc();
		int		add_contact(Contact contact, int i);
		void	display_contacts();
		void	check_size(std::string str);
};