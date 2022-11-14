/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:58:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 02:49:13 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	inc = 0;
}

Contact	PhoneBook::getContacts(int i)
{
	return (this->contacts[i]);
}

void	PhoneBook::setContacts(Contact contact, int i)
{
	this->contacts[i] = contact;
}

int	PhoneBook::getInc()
{
	return (this->inc);
}

void	PhoneBook::setInc()
{
	this->inc++;
}

int	PhoneBook::add_contact(Contact contact, int i)
{
	if (i > 7)
	{
		i = 0;
	}
	else if (inc <= 7)
		this->inc++;
	this->contacts[i] = contact.save_contact();
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
		this->check_size(contacts[i].getFirst());
		std::cout << "|";
		this->check_size(contacts[i].getLast());
		std::cout << "|";
		this->check_size(contacts[i].getNick());
		std::cout << "\n";
	}
	std::cout << "Enter Your Index\n";
	std::cin >> index;
	this->contacts[0].exit_program();
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
				std::cout << "First name: " << this->contacts[i].getFirst() << "\n";
				std::cout << "Last name: " << this->contacts[i].getLast() << "\n";
				std::cout << "Nickname: " << this->contacts[i].getNick() << "\n";
				std::cout << "Phone number: " << this->contacts[i].getPhone() << "\n";
				std::cout << "Dark secret: " << this->contacts[i].getSecret() << "\n";
			}
		}
	}
	std::cin.ignore();
}