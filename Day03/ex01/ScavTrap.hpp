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

class ScavTrap;

typedef	void	(ScavTrap::*challenge)();

class ScavTrap
{
	unsigned int 	_hitPoints;
	unsigned int 	_hitPointsMax;
	unsigned int 	_energyPoints;
	unsigned int 	_energyPointsMax;
	unsigned int 	_level;
	std::string		_name;
	unsigned int 	_meleeAttackDamage;
	unsigned int 	_rangedAttackDamage;
	unsigned int 	_armorDamageReduction;

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

	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
};

#endif
