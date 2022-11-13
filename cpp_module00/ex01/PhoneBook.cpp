/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:58:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 00:36:58 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	inc = 0;
}

Contact	PhoneBook::getContacts(int i)
{
	return (contacts[i]);
}

void	PhoneBook::setContacts(Contact contact, int i)
{
	contacts[i] = contact;
}

int	PhoneBook::getInc()
{
	return (inc);
}

void	PhoneBook::setInc()
{
	inc++;
}

int	PhoneBook::add_contact(Contact contact, int i)
{
	int j;

	j = 0;
	if (i > 7)
	{
		j++;
		i = 0;
	}
	else if (j == 0)
		inc++;
	contacts[i] = contact.save_contact();
	i++;
	return (i);
}

void	PhoneBook::check_size(std::string str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << str.substr(0, 10);
}

void	PhoneBook::display_contacts()
{
	int	i;
	long n;
	std::string index;
	char *a;

	i = -1;
	std::cout << std::setw(10) << "index" << "|" << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << "\n";
	while (++i < inc)
	{
		std::cout << std::setw(10) << i << "|";
		check_size(contacts[i].getFirst());
		std::cout << "|";
		check_size(contacts[i].getLast());
		std::cout << "|";
		check_size(contacts[i].getNick());
		std::cout << "\n";
	}
	std::cout << "Enter Your Index\n";
	std::cin >> index;
	contacts[0].exit_program();
	n = strtol(index.c_str(), &a, 10);
	i = -1;
	if (a[0] != 0 || n >= inc || n < 0)
		std::cout << "Invalid index!!!\n";
	else
	{
		while (++i < inc)
		{
			if (n == i)
			{
				std::cout << "First name: " << contacts[i].getFirst() << "\n";
				std::cout << "Last name: " << contacts[i].getLast() << "\n";
				std::cout << "Nickname: " << contacts[i].getNick() << "\n";
				std::cout << "Phone number: " << contacts[i].getPhone() << "\n";
				std::cout << "Dark secret: " << contacts[i].getSecret() << "\n";
			}
		}
	}
	std::cin.ignore();
}