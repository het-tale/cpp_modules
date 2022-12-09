/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: het-tale <het-tale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:59:39 by het-tale          #+#    #+#             */
/*   Updated: 2022/12/09 01:14:51 by het-tale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	// std::list<int> mstack;
	// mstack.push_back(5);
	// mstack.push_back(17);
	// mstack.pop_back();
	// std::cout << mstack.size() << std::endl;
	// mstack.push_back(3);
	// mstack.push_back(5);
	// mstack.push_back(737);
	// mstack.push_back(0);
	// std::list<int>::iterator it = mstack.begin();
	// std::list<int>::iterator ite = mstack.end();
	// ++it;
	// --it;
	// while (it != ite)
	// {
	// std::cout << *it << std::endl;
	// ++it;
	// }
	return 0;
	
}