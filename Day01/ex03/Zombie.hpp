/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 11:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	std::string		_name;
	std::string		_type;

public:
	Zombie();
	Zombie(std::string name, std::string type);
	void	announce() const;
	void	setName(std::string name);
	void	setType(std::string type);
};

#endif
