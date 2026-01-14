/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 08:24:17 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/14 21:14:19 by votre_login      ###   ########.fr       */
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
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
	private:
		std::vector<int>	_container;
};
