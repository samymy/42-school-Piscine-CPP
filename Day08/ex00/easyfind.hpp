/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:46:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 19:46:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
int 	easyfind(T & container, int value) {

	typename T::const_iterator	it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw std::out_of_range("Not found");

	return *it;
}

#endif
