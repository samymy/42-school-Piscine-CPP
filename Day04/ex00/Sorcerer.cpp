/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:34:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 20:34:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name + ", " + _title +", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & sorcerer)
{
	*this = sorcerer;

	std::cout << _name + ", " + _title +", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name + ", " + _title + ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer & Sorcerer::operator=(const Sorcerer & sorcerer)
{
	this->_name = sorcerer._name;
	this->_title = sorcerer._title;

	return *this;
}

std::string Sorcerer::getName() const
{
	return _name;
}

std::string Sorcerer::getTitle() const
{
	return _title;
}

std::ostream & operator<<(std::ostream & ostream, const Sorcerer & sorcerer)
{
	ostream << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle();
	ostream << ", and I like ponies !" << std::endl;

	return ostream;
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}
