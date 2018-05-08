/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:31:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:31:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	for (int materia = 0; materia < 4; ++materia)
		_inventory[materia] = 0;
}

Character::Character(const std::string & name) : _name(name)
{
	for (int materia = 0; materia < 4; ++materia)
		_inventory[materia] = 0;
}

Character::Character(const Character & character)
{
	*this = character;
}

Character::~Character() {}

Character & Character::operator=(const Character & character)
{
	this->_name = character._name;
	this->_inventory[0] = character._inventory[0];
	this->_inventory[1] = character._inventory[1];
	this->_inventory[2] = character._inventory[2];
	this->_inventory[3] = character._inventory[3];

	return *this;
}

void Character::equip(AMateria *m)
{
	for (int materia = 0; materia < 4; ++materia)
		if (!_inventory[materia])
		{
			_inventory[materia] = m;
			return;
		}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;

	_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
		return;

	if (!_inventory[idx])
		return;

	_inventory[idx]->use(target);
	_inventory[idx] = 0;
}

std::string const& Character::getName() const
{
	return _name;
}

