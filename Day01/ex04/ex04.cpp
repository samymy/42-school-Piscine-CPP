/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 13:31:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 13:31:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 	main()
{
	std::string		string = "HI THIS IS BRAIN";
	std::string		*pointer = &string;
	std::string		&reference = string;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return (0);
}
