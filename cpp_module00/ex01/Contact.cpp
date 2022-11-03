/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:35:01 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/03 16:42:43 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirst(std::string first)
{
	first_name = first;
}

void	Contact::setLast(std::string last)
{
	last_name = last;
}

void	Contact::setNick(std::string nick)
{
	nickname = nick;
}

void	Contact::setPhone(std::string phone)
{
	phone_number = phone;
}

void	Contact::setSecret(std::string secret)
{
	dark_secret = secret;
}

std::string	Contact::getFirst()
{
	return (first_name);
}

std::string	Contact::getLast()
{
	return (last_name);
}

std::string	Contact::getNick()
{
	return (nickname);
}

std::string	Contact::getPhone()
{
	return (phone_number);
}

std::string	Contact::getSecret()
{
	return (dark_secret);
}
