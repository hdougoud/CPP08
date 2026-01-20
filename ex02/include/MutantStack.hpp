/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:30:27 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/20 09:49:31 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename MutantStack<T>::container_type::iterator iterator;
		MutantStack();
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &src);
		~MutantStack();
		iterator begin(void);
		iterator end(void);
	private:
		
};

#include "../srcs/MutantStack.tpp"
