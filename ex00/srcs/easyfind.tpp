/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: votre_login <votre_login@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:12:14 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/12 21:50:24 by votre_login      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include "../include/color.hpp"

template <typename T>
void easyfind(T container, int n)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw std::exception();
	std::cout << C_GREEN << "occurrence " << *it << " found" << RESET << std::endl;
}

