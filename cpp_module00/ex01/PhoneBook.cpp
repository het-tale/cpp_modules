/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:58:42 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/03 23:06:41 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact	PhoneBook::getContacts(int i)
{
	return (contacts[i]);
}

void	PhoneBook::setContacts(Contact contact, int i)
{
	contacts[i] = contact;
}