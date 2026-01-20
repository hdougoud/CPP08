/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:30:27 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/20 14:53:17 by hdougoud         ###   ########.fr       */
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
		typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
		MutantStack();
		MutantStack(const MutantStack &src);
		MutantStack &operator=(const MutantStack &src);
		~MutantStack();
		iterator begin(void);
		iterator end(void);
		iterator rbegin(void);
		iterator rend(void);
		const_iterator begin(void) const;
		const_iterator end(void) const;
		const_iterator rbegin(void) const;
		const_iterator rend(void) const;
	private:
};

#include "../srcs/MutantStack.tpp"
