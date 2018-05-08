/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 20:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

Victim::Victim() {}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " + _name + " just popped !" << std::endl;
}

Victim::Victim(const Victim & victim)
{
	*this = victim;

	std::cout << "Some random victim called " + _name + " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " + _name + " just died for no apparent reason !" << std::endl;
}

Victim & Victim::operator=(const Victim & victim)
{
	this->_name = victim._name;

	return *this;
}

std::ostream &	operator<<(std::ostream & ostream, const Victim & victim)
{
	ostream << "I'm " + victim.getName() + " and I like otters !" << std::endl;

	return ostream;
}

void Victim::setNane(std::string name)
{
	_name = name;
}

std::string Victim::getName() const
{
	return _name;
}

void Victim::getPolymorphed() const
{
	std::cout << _name + " has been turned into a cute little sheep !" << std::endl;
}
