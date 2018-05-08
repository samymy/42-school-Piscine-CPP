/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 20:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	Peon();

public:
	Peon(std::string name);
	Peon(const Peon & peon);
	~Peon();

	Peon &	operator=(const Peon & peon);

	void 	getPolymorphed() const;
};

#endif
