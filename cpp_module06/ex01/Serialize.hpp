/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:45:57 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/04 00:49:51 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <string>

typedef struct Data
{
    int data;

}   Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif