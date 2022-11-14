/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:43:24 by het-tale          #+#    #+#             */
/*   Updated: 2022/11/14 01:32:41 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <cctype>

int main(int argc, char *argv[])
{
    int i;
    std::string str;

    i = 0;
    if (argc > 1)
    {
        while (++i < argc)
        {
            str = argv[i];
            for (std::string::iterator it=str.begin(); it!=str.end(); it++)
                *it = toupper(*it);
            std::cout << str;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
   std::cout << std::endl;
}