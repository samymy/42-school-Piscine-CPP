/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:30:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:30:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon
{
protected:
	std::string		_name;
	int 			_apcost;
	int 			_damage;

public:
	AWeapon();
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & aWeapon);

	virtual ~AWeapon();

	AWeapon &	operator=(AWeapon const & aWeapon);

	std::string const &	getName() const;
	int 				getAPCost() const;
	int 				getDamage() const;

	virtual	void 		attack() const = 0;

};

#endif
