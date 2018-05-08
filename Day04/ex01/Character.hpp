/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	Character();

	std::string		_name;
	int				_ap;
	AWeapon*		_weapon;

public:
	Character(std::string const & name);
	Character(const Character & character);
	~Character();

	Character &	operator=(const Character & character);

	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);

	std::string const &		getName() const;
	int 					getAP() const;
	const AWeapon*			getWeapon() const;
};

std::ostream &	operator<<(std::ostream & ostream, const Character & character);

#endif
