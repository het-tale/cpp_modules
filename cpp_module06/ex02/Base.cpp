/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 08:55:03 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/06 02:46:31 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
    std::cout << "Default destructor\n";
}

Base* generate(void)
{
    Base *a;
    srand(time(0));
    int choice = rand() % 3;
    if (choice == 0)
        a = new A();
    else if (choice == 1)
        a = new B();
    else
        a = new C();
    return (a);
}

void identify(Base* p)
{
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*>(p);
    if (a)
    {
        std::cout << "The actual type is: A" << std::endl;
        return ;
    }
    b = dynamic_cast<B*>(p);
    if (b)
    {
        std::cout << "The actual type is: B" << std::endl;
        return ;
    }
    c = dynamic_cast<C*>(p);
    if (c)
    {
        std::cout << "The actual type is: C" << std::endl;
        return ;
    }
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "The actual type is: A" << std::endl;
    }
    catch(std::exception& e)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "The actual type is: B" << std::endl;
        }
        catch(std::exception& e)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "The actual type is: C" << std::endl;
            }
            catch(std::exception& e)
            {
                std::cerr << e.what() << std::endl;
            }
        }
    }
}