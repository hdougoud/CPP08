/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 15:19:59 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/14 21:33:57 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <exception>

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
	return ;
}

Span &Span::operator=(const Span &src)
{
	if (this != &src)
	{
		if (this->_container.capacity() < src._container.capacity())
			throw std::exception();		 //TODO: add a custom exception class
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
		throw std::exception();		//TODO: add a custom exception class
	this->_container.push_back(n);
}

int	Span::shortestSpan(void) const
{
	
}

int	Span::longestSpan(void) const
{
	int	max;
	int min;

	if (this->_container.size() <= 1)
		throw std::exception(); //TODO: Throw custom exception
	min = *std::min_element(this->_container.begin(), this->_container.end());
	max = *std::max_element(this->_container.begin(), this->_container.end());
	return (max - min);
}

