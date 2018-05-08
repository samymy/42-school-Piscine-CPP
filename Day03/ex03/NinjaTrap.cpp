/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:12:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 19:12:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	srand(time(0));

	this->_name = "NinjaTrap";
	this->_hitPoints = 60;
	this->_hitPointsMax = 60;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << _name + " is on" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	srand(time(0));

	this->_name = name;
	this->_hitPoints = 60;
	this->_hitPointsMax = 60;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << _name + " is on" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & ninjaTrap)
{
	srand(time(0));

	*this = ninjaTrap;
	std::cout << _name + " is on" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap & ninjaTrap)
{
	this->_name = ninjaTrap._name;
	this->_hitPoints = ninjaTrap._hitPoints;
	this->_hitPointsMax = ninjaTrap._hitPointsMax;
	this->_energyPoints = ninjaTrap._energyPoints;
	this->_energyPointsMax = ninjaTrap._energyPointsMax;
	this->_level = ninjaTrap._level;
	this->_meleeAttackDamage = ninjaTrap._meleeAttackDamage;
	this->_rangedAttackDamage = ninjaTrap._rangedAttackDamage;
	this->_armorDamageReduction = ninjaTrap._armorDamageReduction;

	return *this;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << _name + " is off" << std::endl;
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}

void NinjaTrap::takeDamage(unsigned int amount)
{
	std::cout << "NinjaTrap " + _name + " take damage, ";
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

void NinjaTrap::beRepaired(unsigned int amount)
{
	std::cout << "NinjaTrap " + _name + " repaired ";
	std::cout << amount << " of hit points !" << std::endl;

	if (_hitPoints + amount > _hitPointsMax)
		_hitPoints = _hitPointsMax;
	else
		_hitPoints += amount;
}

void NinjaTrap::ninjaShoebox(ClapTrap & clapTrap)
{
	(void)clapTrap;
	std::cout << "Different action with ClapTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap & fragTrap)
{
	(void)fragTrap;
	std::cout << "Different action with FragTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap & scavTrap)
{
	(void)scavTrap;
	std::cout << "Different action with ScavTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap & ninjaTrap)
{
	(void)ninjaTrap;
	std::cout << "Different action with NinjaTrap" << std::endl;
}
