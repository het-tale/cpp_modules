/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:46:15 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 00:58:30 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	Contact		contact;
	std::string choice;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "Enter Your choice\n";
		std::getline(std::cin, choice);
		contact.exit_program();
		if (choice == "ADD")
			i = phone_book.add_contact(contact, i);
		else if (choice == "SEARCH")
			phone_book.display_contacts();
		else if (choice == "EXIT" || std::cin.eof())
			break ;
		else
			continue ;
	}
	return (0);
}