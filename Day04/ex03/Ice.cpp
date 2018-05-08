/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:28:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:28:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice & ice) : AMateria(ice) {}

Ice::~Ice() {}

AMateria * Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter & target)
{
	AMateria::use(target);

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}