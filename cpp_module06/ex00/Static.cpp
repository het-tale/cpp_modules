/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Static.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:33:51 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/05 12:23:52 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Static.hpp"

bool    isInt(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            return (false);
        i++;
    }
    return (true);
}

bool isFloat(char *str)
{
    std::string inff[3] = {"-inff", "+inff", "nanf"};
    int i = 0, d = 0;

    while (i < 3)
    {
        if (!strcmp(inff[i].c_str(), str))
            return (true);
        i++;
    }
    i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            break ;
        i++;
        d++;
    }
    if(str[i] != '.' || d == 0)
        return (false);
    i++;
    d = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            break ;
        i++;
        d++;
    }
    if (str[i] == 'f' && str[i + 1] == '\0' && d > 0)
        return (true);
    return (false);
}

bool isDouble(char *str)
{
    std::string inf[3] = {"-inf", "+inf", "nan"};
    int i = 0, d = 0;

    while (i < 3)
    {
        if (!strcmp(inf[i].c_str(), str))
            return (true);
        i++;
    }
    i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        if (!isdigit(str[i]))
            break ;
        i++;
        d++;
    }
    if(str[i] != '.' || d == 0)
        return (false);
    i++;
    d = 0;
    while (str[i])
    {
        if (!isdigit(str[i]))
            break ;
        i++;
        d++;
    }
    if (str[i] == '\0' && d > 0)
        return (true);
    return (false);
}

void    Convert_all(char *str)
{
    int inta;
    float floata;
    double doubla;
    char chara;

    if (isInt(str))
    {
        inta = std::stoi(str);
        floata = static_cast<float>(inta);
        doubla = static_cast<double>(inta);
        chara = static_cast<char>(inta);
    }
    else if (isFloat(str))
    {
        floata = std::stof(str);
        inta = static_cast<int>(floata);
        doubla = static_cast<double>(floata);
        chara = static_cast<char>(floata);
    }
    else if (isDouble(str))
    {
        doubla = std::stod(str);
        floata = static_cast<float>(doubla);
        inta = static_cast<int>(doubla);
        chara = static_cast<char>(doubla);
    }
    else if (strlen(str) == 1)
    {
        chara = str[0];
        floata = static_cast<float>(chara);
        inta = static_cast<int>(chara);
        doubla = static_cast<double>(chara);
    }
    print_messages(inta, chara, floata, doubla);
}

void    print_messages(int inta, char chara, float floata, double doubla)
{
    if (!isprint(chara))
        std::cout << "char: Non displayable" << std::endl;
    else if (inta > CHAR_MAX || inta < CHAR_MIN)
        std::cout << "char: Impossible" << std::endl;
    else
        std::cout << "char: " << chara << std::endl;
    if (inta > INT_MAX || inta < INT_MIN)
        std::cout << "int: Impossible" << std::endl;
    else
        std::cout << "int: " << inta << std::endl;
    std::cout << "float: " << floata << "f" << std::endl;
    std::cout << "double: " << doubla << std::endl;
}
