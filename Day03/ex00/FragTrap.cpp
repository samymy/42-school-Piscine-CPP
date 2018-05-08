/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:00:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/04 18:00:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "FragTrap.hpp"

const attack	FragTrap::_attacks[] =
		{
				&FragTrap::minigunAttack,
				&FragTrap::punisherAttack,
				&FragTrap::blusterAttack,
				&FragTrap::bananaAttack,
				&FragTrap::shoutAttack
		};

FragTrap::FragTrap() : _hitPoints(100),
					   _hitPointsMax(100),
					   _energyPoints(100),
					   _energyPointsMax(100),
					   _level(1),
					   _name("FragTrap"),
					   _meleeAttackDamage(30),
					   _rangedAttackDamage(20),
					   _armorDamageReduction(5)
{
	srand(time(0));

	std::cout << _name + " is on" << std::endl;
}

FragTrap::FragTrap(std::string name) : _hitPoints(100),
									   _hitPointsMax(100),
									   _energyPoints(100),
									   _energyPointsMax(100),
									   _level(1),
									   _name(name),
									   _meleeAttackDamage(30),
									   _rangedAttackDamage(20),
									   _armorDamageReduction(5)
{
	srand(time(0));

	std::cout << name + " is on" << std::endl;
}

FragTrap::FragTrap(const FragTrap & fragTrap)
{
	srand(time(0));

	*this = fragTrap;
	std::cout << _name + " is on" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & fragTrap)
{
	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_hitPointsMax = fragTrap._hitPointsMax;
	this->_energyPoints = fragTrap._energyPoints;
	this->_energyPointsMax = fragTrap._energyPointsMax;
	this->_level = fragTrap._level;
	this->_meleeAttackDamage = fragTrap._meleeAttackDamage;
	this->_rangedAttackDamage = fragTrap._rangedAttackDamage;
	this->_armorDamageReduction = fragTrap._armorDamageReduction;

	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << _name + " is off" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _rangedAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP " + _name + " attacks " + target + " at range, ";
	std::cout << "causing " << _meleeAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " + _name + " take damage, ";
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

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " + _name + " repaired ";
	std::cout << amount << " of hit points !" << std::endl;

	if (_hitPoints + amount > _hitPointsMax)
		_hitPoints = _hitPointsMax;
	else
		_hitPoints += amount;
}

void FragTrap::minigunAttack(std::string const &target)
{
	std::cout << "Minigun attack" << std::endl;
	this->rangedAttack(target);
}

void FragTrap::punisherAttack(std::string const &target)
{
	std::cout << "Punisher attack" << std::endl;
	this->meleeAttack(target);
}

void FragTrap::blusterAttack(std::string const &target)
{
	std::cout << "Bluster attack" << std::endl;
	this->rangedAttack(target);
}

void FragTrap::bananaAttack(std::string const &target)
{
	std::cout << "Banana attack" << std::endl;
	this->meleeAttack(target);
}

void FragTrap::shoutAttack(std::string const &target)
{
	std::cout << "Shout attack" << std::endl;
	this->meleeAttack(target);
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints < 25) {
		std::cout << "Not enough energy" << std::endl;
		return;
	}

	(this->*_attacks[rand() % 5])(target);
	_energyPoints -= 25;
}

unsigned int FragTrap::getHitPoints() const
{
	return _hitPoints;
}

unsigned int FragTrap::getEnergyPoints() const
{
	return _energyPoints;
}
