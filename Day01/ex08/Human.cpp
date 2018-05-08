/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:29:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:29:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "melee attack - " + target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "ranged attack - " + target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "intimidating shout - " + target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	std::string const	actionNames[] =
			{
					"melee attack",
					"ranged attack",
					"intimidating shout"
			};

	void (Human::*actions[3])(std::string const &target);
	actions[0] = &Human::meleeAttack;
	actions[1] = &Human::rangedAttack;
	actions[2] = &Human::intimidatingShout;

	for (int action = 0; action < 3; ++action)
		if (actionNames[action] == action_name)
			(this->*actions[action])(target);
}
