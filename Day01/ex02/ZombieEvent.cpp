/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 11:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

const std::string 	ZombieEvent::_names[] =
		{
				"Zombie #1",
				"Zombie #2",
				"Zombie #3",
				"Zombie #4",
				"Zombie #5"
		};

void ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

Zombie* ZombieEvent::randomChump()
{
	Zombie	*zombie = new Zombie(ZombieEvent::_names[rand() % 5], this->_type);

	zombie->announce();
	return (zombie);
}
