/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:37:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 10:37:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "list.hpp"

class Squad : public ISquad
{
	t_list	*_spaceMarines;

public:
	Squad();
	Squad(const Squad & squad);
	~Squad();

	Squad &	operator=(const Squad & squad);

	int 			getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int 			push(ISpaceMarine*);
};

#endif
