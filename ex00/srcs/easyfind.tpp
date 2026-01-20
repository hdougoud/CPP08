/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 15:12:14 by votre_login       #+#    #+#             */
/*   Updated: 2026/01/20 09:07:17 by hdougoud         ###   ########.fr       */
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
		throw std::runtime_error("Occurrence not found");
	std::cout << C_GREEN << "occurrence " << *it << " found" << RESET << std::endl;
}

