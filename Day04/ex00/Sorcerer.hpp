/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:34:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 20:34:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include "Victim.hpp"
#include <string>

class Sorcerer
{
	Sorcerer();

	std::string		_name;
	std::string		_title;

public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer & sorcerer);
	~Sorcerer();

	Sorcerer &	operator=(const Sorcerer & sorcerer);

	void			polymorph(Victim const &) const;

	std::string		getName() const;
	std::string		getTitle() const;
};

std::ostream & operator<<(std::ostream & ostream, const Sorcerer & sorcerer);

#endif
