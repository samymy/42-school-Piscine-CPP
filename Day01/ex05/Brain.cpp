/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:41:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 13:41:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _NBNerveCells(0) {}

std::string Brain::identify() const
{
	std::stringstream	str;

	str << this;
	return (str.str());
}

unsigned int Brain::get_NBNerveCells() const
{
	return (this->_NBNerveCells);
}
