/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:31:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 11:31:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {}

void Zombie::announce() const
{
	std::cout << '<' + this->_name + " (" + this->_type + ")> ";
	std::cout << "Braiiiiiiinnnssss...\n";
}
