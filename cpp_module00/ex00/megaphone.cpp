/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:43:24 by het-tale          #+#    #+#             */
/*   Updated: 2022/10/26 10:43:27 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

char    *ft_toupper(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        str[i] = toupper(str[i]);
    return (str);
}

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    if (argc > 1)
    {
        while (++i < argc)
            std::cout << ft_toupper(argv[i]);
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
   std::cout << std::endl;
}