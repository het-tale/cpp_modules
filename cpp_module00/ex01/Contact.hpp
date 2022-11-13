/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:44:28 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 00:41:54 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string dark_secret;
	public:
		void	setFirst(std::string first);
		void	setLast(std::string last);
		void	setNick(std::string nick);
		void	setPhone(std::string phone);
		void	setSecret(std::string secret);
		std::string	getFirst();
		std::string	getLast();
		std::string	getNick();
		std::string	getPhone();
		std::string	getSecret();
		Contact	save_contact();
		void	exit_program();
};