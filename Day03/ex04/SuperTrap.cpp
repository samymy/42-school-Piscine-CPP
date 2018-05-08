/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:45:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 19:45:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->_name = "SuperTrap";
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << _name + " is on" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << _name + " is on" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & superTrap)
{
	*this = superTrap;
	std::cout << _name + " is on" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap & superTrap)
{
	this->_name = superTrap._name;
	this->_hitPoints = superTrap._hitPoints;
	this->_hitPointsMax = superTrap._hitPointsMax;
	this->_energyPoints = superTrap._energyPoints;
	this->_energyPointsMax = superTrap._energyPointsMax;
	this->_level = superTrap._level;
	this->_meleeAttackDamage = superTrap._meleeAttackDamage;
	this->_rangedAttackDamage = superTrap._rangedAttackDamage;
	this->_armorDamageReduction = superTrap._armorDamageReduction;

	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << _name + " is off" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	std::cout << "SuperTrap " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target)
{
	std::cout << "SuperTrap " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}

void SuperTrap::takeDamage(unsigned int amount)
{
	std::cout << "SuperTrap " + _name + " take damage, ";
	std::cout << "causing " << amount << " of hit points !" << std::endl;

	if (amount < _armorDamageReduction)
		amount = 0;
	else
		amount -= _armorDamageReduction;

	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void SuperTrap::beRepaired(unsigned int amount)
{
	std::cout << "SuperTrap " + _name + " repaired ";
	std::cout << amount << " of hit points !" << std::endl;

	if (_hitPoints + amount > _hitPointsMax)
		_hitPoints = _hitPointsMax;
	else
		_hitPoints += amount;
}
