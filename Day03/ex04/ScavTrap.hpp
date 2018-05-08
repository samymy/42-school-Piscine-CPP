/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 15:58:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 15:58:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class ScavTrap;

typedef	void	(ScavTrap::*challenge)();

class ScavTrap : public ClapTrap
{
	void 	challenge1();
	void	challenge2();
	void	challenge3();
	void	challenge4();
	void	challenge5();

	static const challenge		_challenges[];

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap & scavTrap);
	~ScavTrap();

	ScavTrap & operator=(const ScavTrap & scavTrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer();
};

#endif
