/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 10:36:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 10:36:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony	*pony = new Pony("HeapPony");

	std::cout << "Pony in the function \'ponyOnTheHeap()\' ";
	std::cout << "has name \'" << pony->getName() << "\'\n";

	delete pony;
}

void	ponyOnTheStack()
{
	Pony	pony = Pony("StackPony");

	std::cout << "Pony in the function \'ponyOnTheStack()\' ";
	std::cout << "has name \'" << pony.getName() << "\'\n";
}

int		main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
