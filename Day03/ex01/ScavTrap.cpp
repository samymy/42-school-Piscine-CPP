/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:58:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 15:58:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ScavTrap.hpp"

const challenge	ScavTrap::_challenges[] =
		{
				&ScavTrap::challenge1,
				&ScavTrap::challenge2,
				&ScavTrap::challenge3,
				&ScavTrap::challenge4,
				&ScavTrap::challenge5
		};

ScavTrap::ScavTrap() : _hitPoints(100),
					   _hitPointsMax(100),
					   _energyPoints(50),
					   _energyPointsMax(50),
					   _level(1),
					   _name("ScavTrap"),
					   _meleeAttackDamage(20),
					   _rangedAttackDamage(15),
					   _armorDamageReduction(3)
{
	srand(time(0));

	std::cout << _name + " is on (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hitPoints(100),
									   _hitPointsMax(100),
									   _energyPoints(50),
									   _energyPointsMax(50),
									   _level(1),
									   _name(name),
									   _meleeAttackDamage(20),
									   _rangedAttackDamage(15),
									   _armorDamageReduction(3)
{
	srand(time(0));

	std::cout << name + " is on (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & scavTrap)
{
	srand(time(0));

	*this = scavTrap;
	std::cout << _name + " is on (ScavTrap)" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name + " is off (ScavTrap)" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & scavTrap)
{
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_hitPointsMax = scavTrap._hitPointsMax;
	this->_energyPoints = scavTrap._energyPoints;
	this->_energyPointsMax = scavTrap._energyPointsMax;
	this->_level = scavTrap._level;
	this->_meleeAttackDamage = scavTrap._meleeAttackDamage;
	this->_rangedAttackDamage = scavTrap._rangedAttackDamage;
	this->_armorDamageReduction = scavTrap._armorDamageReduction;

	return *this;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " + _name + " take damage, ";
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

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " + _name + " repaired ";
	std::cout << amount << " of hit points !" << std::endl;

	if (_hitPoints + amount > _hitPointsMax)
		_hitPoints = _hitPointsMax;
	else
		_hitPoints += amount;
}

void ScavTrap::challengeNewcomer()
{
	(this->*_challenges[rand() % 5])();
}

void ScavTrap::challenge1()
{
	std::cout << "Save the girl" << std::endl;
}

void ScavTrap::challenge2()
{
	std::cout << "Inflict 1000 points of damage" << std::endl;
}

void ScavTrap::challenge3()
{
	std::cout << "Find a lost animal" << std::endl;
}

void ScavTrap::challenge4()
{
	std::cout << "Get 1000 points of damage" << std::endl;
}

void ScavTrap::challenge5()
{
	std::cout << "Get five Achievements" << std::endl;
}

unsigned int ScavTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int ScavTrap::getEnergyPoints() const
{
	return _energyPoints;
}
