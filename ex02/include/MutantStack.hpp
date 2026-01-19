/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:30:27 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/19 11:40:18 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void);
		MutantStack<T>(const MutantStack<T> &src);
		MutantStack<T> &operator=(const MutantStack<T> &src);
		~MutantStack<T>(void);
	private:
};

#include "../srcs/MutantStack.tpp"
