/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:46:15 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/04 02:11:18 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	exit_program()
{
	if (std::cin.eof())
		exit(0);
}

Contact	save_contact(Contact contact)
{
	std::string field;

	while (field.empty())
	{
		std::cout << "Enter Your First name\n";
		std::getline(std::cin, field);
		exit_program();
		contact.setFirst(field);
	}
	field = "";
	while (field.empty())
	{
		std::cout << "Enter Your Last name\n";
		std::getline(std::cin, field);
		exit_program();
		contact.setLast(field);
	}
	field = "";
	while (field.empty())
	{
		std::cout << "Enter Your Nickname\n";
		std::getline(std::cin, field);
		exit_program();
		contact.setNick(field);
	}
	field = "";
	while (field.empty())
	{
		std::cout << "Enter Your Phone number\n";
		std::getline(std::cin, field);
		exit_program();
		contact.setPhone(field);
	}
	field = "";
	while (field.empty())
	{
		std::cout << "Enter Your Dark secret\n";
		std::getline(std::cin, field);
		exit_program();
		contact.setSecret(field);
	}
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
	long n;
	std::string index;
	char *a;

	i = -1;
	std::cout << std::setw(10) << "index" << "|" << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "\n";
	while (++i < phone_book.getInc())
	{
		std::cout << std::setw(10) << i << "|";
		check_size(phone_book.getContacts(i).getFirst());
		std::cout << "|";
		check_size(phone_book.getContacts(i).getLast());
		std::cout << "|";
		check_size(phone_book.getContacts(i).getNick());
		std::cout << "\n";
	}
	std::cout << "Enter Your Index\n";
	std::cin >> index;
	exit_program();
	n = strtol(index.c_str(), &a, 10);
	i = -1;
	if (a[0] != 0 || n >= phone_book.getInc() || n < 0)
		std::cout << "Invalid index!!!\n";
	else
	{
		while (++i < phone_book.getInc())
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
	phone_book = PhoneBook();
	while (1)
	{
		std::cout << "Enter Your choice\n";
		std::getline(std::cin, choice);
		exit_program();
		if (choice == "ADD")
		{
			contact = save_contact(contact);
			if (i > 7)
			{
				i = 0;
			}
			else
				phone_book.setInc();
			phone_book.setContacts(contact, i);
			i++;
		}
		else if (choice == "SEARCH")
		{
			display_contacts(phone_book);
		}
		else if (choice == "EXIT" || std::cin.eof())
			break ;
		else
			continue ;
	}
	return (0);
}