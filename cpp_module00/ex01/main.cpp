/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:46:15 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/04 00:07:25 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact	save_contact(Contact contact)
{
	std::string field;

	std::cout << "Enter Your First name\n";
	std::getline(std::cin, field);
	contact.setFirst(field);
	std::cout << "Enter Your Last name\n";
	std::getline(std::cin, field);
	contact.setLast(field);
	std::cout << "Enter Your Nickname\n";
	std::getline(std::cin, field);
	contact.setNick(field);
	std::cout << "Enter Your Phone number\n";
	std::getline(std::cin, field);
	contact.setPhone(field);
	std::cout << "Enter Your Dark secret\n";
	std::getline(std::cin, field);
	contact.setSecret(field);
	return (contact);
}

void	check_size(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str.substr(0, 10);
}

void	display_contacts(PhoneBook phone_book)
{
	int	i;
	int n;

	i = -1;
	std::cout << std::setw(10) << "index" << "|" << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "\n";
	while (++i < 8)
	{
		if (phone_book.getContacts(i).getFirst().empty())
			break ;
		std::cout << std::setw(10) << i << "|";
		check_size(phone_book.getContacts(i).getFirst());
		std::cout << "|";
		check_size(phone_book.getContacts(i).getLast());
		std::cout << "|";
		check_size(phone_book.getContacts(i).getNick());
		std::cout << "\n";
	}
	std::cout << "Enter Your Index\n";
	std::cin >> n;
	i = -1;
	if (n > 8 || n < 0)
		std::cout << "Invalid index!!!\n";
	else
	{
		while (++i < 8)
		{
			if (n == i)
			{
				std::cout << "First name: " << phone_book.getContacts(i).getFirst() << "\n";
				std::cout << "Last name: " << phone_book.getContacts(i).getLast() << "\n";
				std::cout << "Nickname: " << phone_book.getContacts(i).getNick() << "\n";
				std::cout << "Phone number: " << phone_book.getContacts(i).getPhone() << "\n";
				std::cout << "Dark secret: " << phone_book.getContacts(i).getSecret() << "\n";
			}
		}
	}
	std::cin.ignore();
}

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
		if (choice == "ADD")
		{
			contact = save_contact(contact);
			if (i > 7)
			{
				i = 0;
			}
			phone_book.setContacts(contact, i);
			i++;
		}
		else if (choice == "SEARCH")
		{
			display_contacts(phone_book);
		}
		else if (choice == "EXIT")
			break ;
		else
			continue ;
	}
	return (0);
}