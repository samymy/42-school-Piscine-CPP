/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:37:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 10:37:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _spaceMarines(0) {}

Squad::Squad(const Squad & squad)
{
	t_list	*list = squad._spaceMarines;

	while (list)
	{
		ft_lstappend(&_spaceMarines, ft_lstnew(list->spaceMarine));
		list = list->next;
	}
}

Squad & Squad::operator=(const Squad & squad)
{
	ft_lstdel(&_spaceMarines, ft_content_deleter);

	t_list	*list = squad._spaceMarines;

	while (list)
	{
		ft_lstappend(&_spaceMarines, ft_lstnew(list->spaceMarine));
		list = list->next;
	}

	return *this;
}

Squad::~Squad()
{
	ft_lstdel(&_spaceMarines, ft_content_deleter);
}

int Squad::getCount() const
{
	return ft_lstsize(_spaceMarines);
}

ISpaceMarine* Squad::getUnit(int idx) const
{
	if (idx < 0)
		return (0);

	t_list	*list = ft_lstget(_spaceMarines, idx);

	if (list)
		return list->spaceMarine;

	return (0);
}

int Squad::push(ISpaceMarine *spaceMarine)
{
	if (!spaceMarine || ft_lstsearch(_spaceMarines, spaceMarine))
		return this->getCount();

	ft_lstappend(&_spaceMarines, ft_lstnew(spaceMarine));

	return this->getCount();
}