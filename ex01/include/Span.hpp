/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 08:24:17 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/19 11:55:02 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>

class Span
{
	public:
		Span();
		Span(unsigned int size);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		int		getContainerSize(void) const;
	private:
		std::vector<int>	_container;
};
