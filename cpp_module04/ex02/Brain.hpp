/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 08:12:14 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/22 11:08:32 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string	ideas[100];
    public:
        Brain();
        Brain(std::string type);
        Brain(const Brain& brain);
        Brain& operator= (const Brain& brain);
        ~Brain();
        std::string getIdeas(int i) const;
        void    setIdeas(std::string idea, int i);
};
#endif