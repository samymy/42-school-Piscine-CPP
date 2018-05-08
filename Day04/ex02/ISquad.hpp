/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:44:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 10:44:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

class ISpaceMarine;

class ISquad
{
public:
	virtual					~ISquad() {}
	virtual int 			getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int) const = 0;
	virtual int 			push(ISpaceMarine*) = 0;
};

#endif
