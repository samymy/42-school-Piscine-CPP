/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 18:00:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/04 18:00:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

class FragTrap;

typedef	void	(FragTrap::*attack)(std::string const & target);

class FragTrap
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

	void 	minigunAttack(std::string const & target);
	void	punisherAttack(std::string const & target);
	void	blusterAttack(std::string const & target);
	void	bananaAttack(std::string const & target);
	void	shoutAttack(std::string const & target);

	static const	attack		_attacks[];


public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap & fragTrap);
	~FragTrap();

	FragTrap &	operator=(const FragTrap & fragTrap);

	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

	unsigned int	getHitPoints() const;
	unsigned int	getEnergyPoints() const;
};

#endif
