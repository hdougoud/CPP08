/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 00:35:15 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/19 17:06:51 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "../include/color.hpp"
#include "../include/MutantStack.hpp"

void	subject_main(void);
void	list_compare_test(void);

int main(void)
{
	subject_main();
	std::endl(std::cout);
	list_compare_test();
	return 0;
}

void	subject_main(void)
{
	std::cout << F_BOLD << C_PURPLE << "SUBJECT MAIN" << RESET << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
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
}

void	list_compare_test(void)
{
	std::cout << F_BOLD << C_PURPLE << "LIST COMPARE TEST" << RESET << std::endl;
	std::list<int> list;

	list.push_back(5);
	list.push_back(17);

	std::cout << list.back() << std::endl;

	list.pop_back();

	std::cout << list.size() << std::endl;

	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

