/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:38:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 12:38:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <cstdlib>
#include <ctime>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
	Zombie*						_zombies;
	unsigned int				_zombieNumber;
	static const std::string 	_names[];

public:
	ZombieHorde(unsigned int zombieNumber);
	~ZombieHorde();
	void	announce() const;
};

#endif
