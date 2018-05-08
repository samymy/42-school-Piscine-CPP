/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 17:43:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 17:43:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
	unsigned int 	_hitPoints;
	unsigned int 	_hitPointsMax;
	unsigned int 	_energyPoints;
	unsigned int 	_energyPointsMax;
	unsigned int 	_level;
	std::string		_name;
	unsigned int 	_meleeAttackDamage;
	unsigned int 	_rangedAttackDamage;
	unsigned int 	_armorDamageReduction;

public:
	ClapTrap();
	ClapTrap(const ClapTrap & clapTrap);
	~ClapTrap();

	ClapTrap & operator=(const ClapTrap & clapTrap);

	virtual void	rangedAttack(std::string const & target) = 0;
	virtual void	meleeAttack(std::string const & target) = 0;
	virtual void	takeDamage(unsigned int amount) = 0;
	virtual void	beRepaired(unsigned int amount) = 0;
};

#endif
