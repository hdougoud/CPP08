/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 08:18:50 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/20 09:17:18 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>
#include <vector>
#include "../include/Span.hpp"
#include "../include/color.hpp"

void	subject_test(void);
void	iterator_range_test(void);
void	too_much_numbers_test(void);
void	only_one_number_test(void);

int main(void)
{
	subject_test();
	iterator_range_test();
	too_much_numbers_test();
	only_one_number_test();
}

void	subject_test(void)
{
	std::cout << F_BOLD << C_PURPLE << "SUBJECT MAIN TEST" << RESET << std::endl;
	try {
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::runtime_error &e) {
		std::cerr << C_RED << e.what() << RESET << std::endl;
	}
	std::endl(std::cout);
}

void	iterator_range_test(void)
{
	std::cout << F_BOLD << C_PURPLE << "ITERATOR RANGES TEST" << RESET << std::endl;
	std::vector<int> vec1;
	std::vector<int> vec2;


	vec1.reserve(50000);
	vec2.reserve(50000);
	for (int i = 0; i < 50000; i++)
		vec1.push_back(i);
	for (int i = 50000; i < 100000; i++)
		vec2.push_back(i);
	try {
		Span sp(100500);

		sp.addNumber(vec1.begin(), vec1.end());
		sp.addNumber(vec2.begin(), vec2.end());
		std::cout << C_BLUE << "Span size = " << sp.getContainerSize() << RESET << std::endl;
	}
	catch (std::runtime_error &e) {
		std::cerr << C_RED << e.what() << RESET << std::endl;
	}
	std::endl(std::cout);
}

void	too_much_numbers_test(void)
{
	std::cout << F_BOLD << C_PURPLE << "TOO MUCH NUMBERS TEST" << RESET << std::endl;
	try {
		Span sp(5);
		
		std::cout << sp.getContainerCapacity() << std::endl;
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);
		std::cout << C_BLUE << "Span size = " << sp.getContainerSize() << RESET << std::endl;
		sp.addNumber(2);
	}
	catch (std::runtime_error &e) {
		std::cerr << C_RED << e.what() << RESET << std::endl;
	}
	std::endl(std::cout);
}

void	only_one_number_test(void)
{
	std::cout << F_BOLD << C_PURPLE << "ONLY ONE NUMBER TEST" << RESET << std::endl;
	try {
		Span sp(10);

		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << C_RED "If all goes well, this shouldn't show up" << RESET << std::endl;
	}
	catch (std::runtime_error &e) {
		std::cerr << C_RED << e.what() << RESET << std::endl;
	}
}

