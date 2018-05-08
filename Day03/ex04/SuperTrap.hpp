/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:45:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 19:45:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap & superTrap);
	~SuperTrap();

	SuperTrap &	operator=(const SuperTrap & superTrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif
