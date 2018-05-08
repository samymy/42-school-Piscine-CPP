/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 19:48:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 19:48:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>
#include "easyfind.hpp"

int		main() {

	std::vector<int> vector;

	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);

	std::cout << "Value in vector: " << easyfind(vector, 3) << std::endl;
	std::cout << "Value in vector: ";

	try {
		std::cout << easyfind(vector, 6) << std::endl;
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	std::list<int>	list;

	list.push_back(1);
	list.push_back(2);
	list.push_back(3);

	std::cout << "Value in list: " << easyfind(list, 1) << std::endl;
	std::cout << "Value in list: ";

	try {
		std::cout << easyfind(list, 5) << std::endl;
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	return 0;
}
