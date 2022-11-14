/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:35:01 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 02:15:13 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirst(std::string first)
{
	this->first_name = first;
}

void	Contact::setLast(std::string last)
{
	this->last_name = last;
}

void	Contact::setNick(std::string nick)
{
	this->nickname = nick;
}

void	Contact::setPhone(std::string phone)
{
	this->phone_number = phone;
}

void	Contact::setSecret(std::string secret)
{
	this->dark_secret = secret;
}

std::string	Contact::getFirst()
{
	return (this->first_name);
}

std::string	Contact::getLast()
{
	return (this->last_name);
}

std::string	Contact::getNick()
{
	return (this->nickname);
}

std::string	Contact::getPhone()
{
	return (this->phone_number);
}

std::string	Contact::getSecret()
{
	return (this->dark_secret);
}

void	Contact::exit_program()
{
	if (std::cin.eof())
		exit(0);
}

bool	Contact::is_only_digit(std::string str)
{
	for (std::string::iterator it=str.begin(); it!=str.end(); it++)
		if (!std::isdigit(*it))
			return (false);
	return (true);
}

Contact	Contact::save_contact()
{
	std::string field;
	Contact		contact;

	while (field.empty())
	{
		std::cout << "Enter Your First name\n";
		std::getline(std::cin, field);
		this->exit_program();
		contact.setFirst(field);
	}
	field = "";
	while (field.empty())
	{
		std::cout << "Enter Your Last name\n";
		std::getline(std::cin, field);
		this->exit_program();
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
		if (!this->is_only_digit(field))
			field = "";
		this->exit_program();
		contact.setPhone(field);
	}
	field = "";
	while (field.empty())
	{
		std::cout << "Enter Your Dark secret\n";
		std::getline(std::cin, field);
		this->exit_program();
		contact.setSecret(field);
	}
	return (contact);
}