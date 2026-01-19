/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:30:23 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/19 16:46:49 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src)
{
	(void) src;
	return ;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &src)
{
	if (this != &src)
	{
		std::stack<T>::operator=(src);
	}
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	return ;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return (this->c.end());
}
