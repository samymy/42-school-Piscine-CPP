/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:29:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:29:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main()
{
	Human	human;

	human.action("melee attack", "target #1");
	human.action("ranged attack", "target #2");
	human.action("intimidating shout", "target #3");
	human.action("undefined attack", "target #4");
	return (0);
}
