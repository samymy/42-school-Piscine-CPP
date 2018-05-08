/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 11:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int 	main()
{
	ZombieEvent	zombieEvent;
	Zombie		*zombies[5];

	srand(time(0));
	zombieEvent.setZombieType("Tank");
	for (int zombie = 0; zombie < 5; ++zombie)
	{
		zombies[zombie] = zombieEvent.randomChump();
		delete zombies[zombie];
	}
	
	zombieEvent.setZombieType("Sprinters");
	for (int zombie = 0; zombie < 5; ++zombie)
	{
		zombies[zombie] = zombieEvent.randomChump();
		delete zombies[zombie];
	}
}
