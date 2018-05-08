/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 11:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent
{
	std::string					_type;
	static const std::string 	_names[];

public:
	void		setZombieType(std::string type);
	Zombie* 	newZombie(std::string name);
	Zombie*		randomChump();
};

#endif
