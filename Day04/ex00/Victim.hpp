/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 20:35:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 20:35:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>

class Victim
{
	Victim();

	std::string		_name;

public:
	Victim(std::string name);
	Victim(const Victim & victim);
	~Victim();

	Victim &	operator=(const Victim & victim);

	virtual void	getPolymorphed() const;

	void			setNane(std::string name);
	std::string		getName() const;
};

std::ostream &	operator<<(std::ostream & ostream, const Victim & victim);

#endif
