/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:12:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 08:12:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Converter.hpp"

int 	main(int argc, char **argv) {

	if (argc != 2)
	{
		std::cout << "usage: ./convert <string>" << std::endl;
		return 0;
	}

	Converter	converter(argv[1]);

	std::cout << converter;

	return 0;
}