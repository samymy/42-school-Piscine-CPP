/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:51:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 12:51:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.hpp"

t_list	*ft_lstnew(ISpaceMarine *spaceMarine)
{
	if (!spaceMarine)
		return (0);

	t_list	*list= new t_list;

	list->spaceMarine = spaceMarine;
	list->next = 0;

	return (list);
}

void	ft_lstappend(t_list **alst, t_list *elem)
{
	t_list	*list;

	if (!alst || !elem)
		return ;

	list = *alst;
	if (!list)
	{
		*alst = elem;
		return ;
	}

	while (list->next)
		list = list->next;

	list->next = elem;
}

t_list	*ft_lstsearch(t_list *list, const ISpaceMarine *spaceMarine)
{
	while (list)
	{
		if (list->spaceMarine == spaceMarine)
			return (list);
		list = list->next;
	}
	return (0);
}

void	ft_content_deleter(ISpaceMarine *spaceMarine)
{
	if (spaceMarine)
		delete spaceMarine;
}

size_t	ft_lstsize(t_list *list)
{
	size_t	size;

	size = 0;
	while (list)
	{
		size++;
		list = list->next;
	}
	return (size);
}

void	ft_lstdel(t_list **alst, void (*del)(ISpaceMarine *spaceMarine))
{
	t_list	*list;
	t_list	*next;

	if (!alst)
		return ;
	list = *alst;
	while (list)
	{
		del(list->spaceMarine);
		next = list->next;
		delete list;
		list = next;
	}
	*alst = 0;
}

t_list	*ft_lstget(t_list *list, size_t index)
{
	size_t	idx;

	idx = 0;
	while (list)
	{
		if (idx++ == index)
			return (list);
		list = list->next;
	}

	return (0);
}
