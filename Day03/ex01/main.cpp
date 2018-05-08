/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:00:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/04 18:00:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main()
{
	FragTrap	fragTrap("FragTrap");

	std::cout << "<===FragTrap===>" << std::endl;

	while (fragTrap.getEnergyPoints())
		fragTrap.vaulthunter_dot_exe("Spider");
	fragTrap.vaulthunter_dot_exe("Spider");

	while (fragTrap.getHitPoints()) {
		fragTrap.takeDamage(25);
		std::cout << fragTrap.getHitPoints() << std::endl;
	}

	while (fragTrap.getHitPoints() != 100) {
		fragTrap.beRepaired(45);
		std::cout << fragTrap.getHitPoints() << std::endl;
	}

	std::cout << "<===ScavTrap===>" << std::endl;

	ScavTrap	scavTrap("ScavTrap");

	while (scavTrap.getHitPoints()) {
		scavTrap.takeDamage(25);
		std::cout << scavTrap.getHitPoints() << std::endl;
	}

	while (scavTrap.getHitPoints() != 100) {
		scavTrap.beRepaired(45);
		std::cout << scavTrap.getHitPoints() << std::endl;
	}

	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	scavTrap.challengeNewcomer();
	return 0;
}