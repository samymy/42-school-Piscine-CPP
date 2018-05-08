/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:26:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:26:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _xp(0) {}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(const AMateria & aMateria)
{
	*this = aMateria;
}

AMateria::~AMateria() {}

AMateria & AMateria::operator=(const AMateria & aMateria)
{
	this->_xp = aMateria._xp;
	this->_type = aMateria._type;

	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter & target)
{
	(void)target;

	_xp += 10;
}
