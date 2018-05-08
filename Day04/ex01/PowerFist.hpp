/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:
	PowerFist();
	PowerFist(const PowerFist & powerFist);
	~PowerFist();

	PowerFist &	operator=(const PowerFist & powerFist);

	void 		attack() const;
};

#endif
