/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:58:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/04 01:02:09 by het-tale         ###   ########.fr       */
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