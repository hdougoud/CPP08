/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 14:31:31 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/20 09:07:40 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <deque>
#include <exception>
#include <iostream>
#include <list>
#include <vector>
#include "../include/color.hpp"
#include "../include/easyfind.hpp"

template <typename T>
void init_container(T &container);
template <typename T>
void find_container(T container, int n);

int main(void)
{
	std::vector<int> vector;
	std::list<int> list;
	std::deque<int> deque;

	init_container(vector);
	init_container(list);
	init_container(deque);

	std::cout << F_BOLD << C_BLUE << "VECTOR TEST" << RESET << std::endl;
	find_container(vector, 4);
	find_container(vector, 42);
	find_container(vector, 3);
	std::cout << F_BOLD << C_BLUE << "\nLIST TEST" << RESET << std::endl;
	find_container(list, 1);
	find_container(list, 37);
	find_container(list, 0);
	std::cout << F_BOLD << C_BLUE << "\nDEQUE TEST" << RESET << std::endl;
	find_container(deque, 1000);
	find_container(deque, 10);
	find_container(deque, -5);

	return (0);
}

template <typename T>
void init_container(T &container)
{
	container.push_back(1);
	container.push_back(3);
	container.push_back(10);
	container.push_back(4);
	container.push_back(37);
	container.push_back(1);
}


template <typename T>
void find_container(T container, int n)
{
	try {
		easyfind(container, n);
	}
	catch (std::runtime_error &e) {
		std::cout << C_RED << "No match found exception" << RESET << std::endl;
	}
}
