/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:25:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:25:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	std::string		_type;
	unsigned int	_xp;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria & aMateria);

	virtual ~AMateria();

	AMateria &	operator=(const AMateria & aMateria);

	std::string const &	getType() const;
	unsigned int		getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);

};

#endif
