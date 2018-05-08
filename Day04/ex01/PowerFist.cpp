/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist & powerFist)
{
	*this = powerFist;
}

PowerFist::~PowerFist() {}

PowerFist & PowerFist::operator=(const PowerFist & powerFist)
{
	this->_name = powerFist._name;
	this->_damage = powerFist._damage;
	this->_apcost = powerFist._apcost;

	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
