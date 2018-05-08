/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 22:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 22:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int materia = 0; materia < 4; ++materia)
		_aMateria[materia] = 0;
}

MateriaSource::MateriaSource(const MateriaSource & materiaSource)
{
	*this = materiaSource;
}

MateriaSource::~MateriaSource() {}

MateriaSource & MateriaSource::operator=(const MateriaSource & materiaSource)
{
	(void)materiaSource;

	return *this;
}

void MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; ++i)
		if (!_aMateria[i])
		{
			_aMateria[i] = materia;
			return;
		}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
		if (_aMateria[i] && _aMateria[i]->getType() == type)
			return _aMateria[i]->clone();

	return 0;
}