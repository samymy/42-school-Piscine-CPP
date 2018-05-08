/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:30:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:30:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
		_name(name),
		_apcost(apcost),
		_damage(damage)
{
}

AWeapon::AWeapon(AWeapon const & aWeapon)
{
	*this = aWeapon;
}

AWeapon::~AWeapon() {}

AWeapon& AWeapon::operator=(AWeapon const &aWeapon)
{
	this->_name = aWeapon._name;
	this->_apcost = aWeapon._apcost;
	this->_damage = aWeapon._damage;

	return *this;
}

std::string const & AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apcost;
}

int AWeapon::getDamage() const
{
	return _damage;
}