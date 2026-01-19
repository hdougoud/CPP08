/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:19:59 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/19 11:59:30 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <exception>
#include <algorithm>
#include <stdexcept>

Span::Span()
{
	return ;
}

Span::Span(unsigned int size)
{
	this->_container.reserve(size);
	return ;
}

Span::Span(const Span &src)
{
	if (this->_container.capacity() < src._container.capacity())
		throw std::runtime_error("Container too small");
	this->_container = src._container;
	return ;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		if (this->_container.capacity() < src._container.capacity())
			throw std::runtime_error("Container too small");
		this->_container = src._container;
	}
	return (*this);
}

Span::~Span()
{
	return ;
}

void	Span::addNumber(int n)
{
	if (this->_container.capacity() <= this->_container.size())
		throw std::runtime_error("Container too small");
	this->_container.push_back(n);
}


void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int	rangeSize;

	rangeSize = std::distance(begin, end);
	if (rangeSize + this->_container.size() > this->_container.capacity())
		throw std::runtime_error("Container too small");
	this->_container.insert(this->_container.end() ,begin, end);
}

int	Span::shortestSpan(void) const
{
	int							diff;
	std::vector<int>			temp;
	std::vector<int>::iterator	it;

	if (this->_container.size() <= 1)
		throw std::runtime_error("Not enough numbers");
	temp = this->_container;
	std::sort(temp.begin(), temp.end(), std::greater<int>());
	diff = (*(temp.begin()) - *(temp.begin() + 1));
	for(it = temp.begin(); it + 1 != temp.end(); it++)
	{
		if (*(it) - *(it + 1) < diff)
			diff = (*it - *(it + 1));
	}
	return (diff);
}

int	Span::longestSpan(void) const
{
	int	max;
	int min;

	if (this->_container.size() <= 1)
		throw std::runtime_error("Not enough numbers");
	min = *std::min_element(this->_container.begin(), this->_container.end());
	max = *std::max_element(this->_container.begin(), this->_container.end());
	return (max - min);
}

int Span::getContainerSize(void) const
{
	return (this->_container.size());
}

