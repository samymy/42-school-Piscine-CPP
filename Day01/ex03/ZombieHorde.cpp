/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:38:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 12:38:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

const std::string 	ZombieHorde::_names[] =
		{
				"Zombie #1",
				"Zombie #2",
				"Zombie #3",
				"Zombie #4",
				"Zombie #5"
		};

ZombieHorde::ZombieHorde(unsigned int zombieNumber) : _zombieNumber(zombieNumber)
{
	this->_zombies = new Zombie[zombieNumber];

	srand(time(0));
	for (unsigned int zombie = 0; zombie < zombieNumber; ++zombie) {
		this->_zombies[zombie].setName(this->_names[rand() % 5]);
		this->_zombies[zombie].setType("Undefined");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}

void ZombieHorde::announce() const
{
	for (unsigned int zombie = 0; zombie < this->_zombieNumber; ++zombie)
		this->_zombies[zombie].announce();
}
