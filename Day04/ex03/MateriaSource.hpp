/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria*		_aMateria[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource & materiaSource);
	~MateriaSource();

	MateriaSource &	operator=(const MateriaSource & materiaSource);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
