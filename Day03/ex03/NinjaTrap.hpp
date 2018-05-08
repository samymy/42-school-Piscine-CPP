/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 19:12:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 19:12:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string name);
	NinjaTrap(const NinjaTrap & ninjaTrap);
	~NinjaTrap();

	NinjaTrap &	operator=(const NinjaTrap & ninjaTrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	void	ninjaShoebox(NinjaTrap & ninjaTrap);
	void	ninjaShoebox(ClapTrap & clapTrap);
	void	ninjaShoebox(FragTrap & fragTrap);
	void	ninjaShoebox(ScavTrap & scavTrap);
};

#endif
