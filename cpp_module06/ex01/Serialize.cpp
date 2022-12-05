/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 00:56:43 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/04 01:20:06 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr)
{
    reinterpret_cast<uintptr_t> (ptr);
    return (ptr);
}

Data* deserialize(uintptr_t raw)
{
    reinterpret_cast<Data*> (raw);
    return (raw);
}
