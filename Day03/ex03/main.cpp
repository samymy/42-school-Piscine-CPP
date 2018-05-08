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

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main()
{
	FragTrap	fragTrap;
	ScavTrap	scavTrap;
	NinjaTrap	ninjaTrap;

	ClapTrap&	clapTrap = fragTrap;

	ninjaTrap.ninjaShoebox(fragTrap);
	ninjaTrap.ninjaShoebox(scavTrap);
	ninjaTrap.ninjaShoebox(ninjaTrap);
	ninjaTrap.ninjaShoebox(clapTrap);

	return 0;
}