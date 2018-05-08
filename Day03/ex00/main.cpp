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

int		main()
{
	FragTrap	fragTrap("Robot");

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
	return 0;
}