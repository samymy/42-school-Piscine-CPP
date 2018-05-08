/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character() {}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(0) {}

Character::Character(const Character & character)
{
	*this = character;
}

Character::~Character() {}

Character & Character::operator=(const Character & character)
{
	this->_name = character._name;

	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _ap;
}

const AWeapon* Character::getWeapon() const
{
	return _weapon;
}

void Character::recoverAP()
{
	if (_ap == 40)
		return;

	_ap += 10;

	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_ap == 0 || !_weapon)
		return;

	std::cout << _name + " attacks " + enemy->getType() + " with a " + _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());

	if (_ap < _weapon->getAPCost())
		_ap = 0;
	else
		_ap -= _weapon->getAPCost();

	if (enemy->getHP() <= 0)
		delete enemy;
}

std::ostream &	operator<<(std::ostream & ostream, const Character & character)
{
	ostream << character.getName() + " has " << character.getAP() << " AP and ";

	if (character.getWeapon())
		ostream << "wields a " + character.getWeapon()->getName();
	else
		ostream << "is unarmed";

	ostream << std::endl;

	return ostream;
}
