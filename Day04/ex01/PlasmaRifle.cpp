/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & plasmaRifle)
{
	*this = plasmaRifle;
}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &plasmaRifle)
{
	this->_name = plasmaRifle._name;
	this->_apcost = plasmaRifle._apcost;
	this->_damage = plasmaRifle._damage;

	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
