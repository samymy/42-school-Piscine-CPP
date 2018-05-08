/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:43:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 17:43:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & clapTrap)
{
	*this = clapTrap;

	std::cout << "ClapTrap copy constructor is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor is called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & clapTrap)
{
	this->_name = clapTrap._name;
	this->_hitPoints = clapTrap._hitPoints;
	this->_hitPointsMax = clapTrap._hitPointsMax;
	this->_energyPoints = clapTrap._energyPoints;
	this->_energyPointsMax = clapTrap._energyPointsMax;
	this->_level = clapTrap._level;
	this->_meleeAttackDamage = clapTrap._meleeAttackDamage;
	this->_rangedAttackDamage = clapTrap._rangedAttackDamage;
	this->_armorDamageReduction = clapTrap._armorDamageReduction;

	return *this;
}
