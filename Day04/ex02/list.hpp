/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 12:51:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/06 12:51:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
#define LIST_HPP

#include <cstdlib>
#include "ISpaceMarine.hpp"

typedef struct			s_list
{
	ISpaceMarine	*spaceMarine;
	struct s_list	*next;
}						t_list;

t_list	*ft_lstnew(ISpaceMarine *spaceMarine);
void	ft_lstappend(t_list **alst, t_list *elem);
t_list	*ft_lstsearch(t_list *list, const ISpaceMarine *spaceMarine);
void	ft_content_deleter(ISpaceMarine *spaceMarine);
size_t	ft_lstsize(t_list *list);
void	ft_lstdel(t_list **alst, void (*del)(ISpaceMarine *spaceMarine));
t_list	*ft_lstget(t_list *list, size_t index);

#endif
