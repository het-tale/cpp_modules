/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:56:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/06 01:49:04 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t> (ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*> (raw));
}
