/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:29:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:29:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure & cure) : AMateria(cure) {}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter & target)
{
	AMateria::use(target);

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
