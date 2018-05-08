/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:46:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 16:46:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int 	main() {

	Array<int>	array(3);

	std::cout << "Array with default values" << std::endl;
	for (unsigned int j = 0; j < array.size(); ++j)
		std::cout << "\t" << array[j];
	std::cout << std::endl;

	for (unsigned int i = 0; i < array.size(); ++i)
		array[i] = i + 1;

	std::cout << "Array" << std::endl;
	for (unsigned int j = 0; j < array.size(); ++j)
		std::cout << "\t" << array[j];
	std::cout << std::endl;

	Array<int> array1 = array;

	array[1] = 5;

	std::cout << "Array after changes" << std::endl;
	for (unsigned int j = 0; j < array.size(); ++j)
		std::cout << "\t" << array[j];
	std::cout << std::endl;

	std::cout << "Array1" << std::endl;
	for (unsigned int j = 0; j < array1.size(); ++j)
		std::cout << "\t" << array1[j];
	std::cout << std::endl;

	std::cout << "Out of bounds" << std::endl;
	try {
		std::cout << array[5] << std::endl;
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	Array<std::string>		stringArray(3);

	stringArray[0] = "string #1";
	stringArray[1] = "string #2";
	stringArray[2] = "string #3";

	std::cout << "String array" << std::endl;
	std::cout << stringArray[0] << std::endl;
	std::cout << stringArray[1] << std::endl;
	std::cout << stringArray[2] << std::endl;

	return 0;
}
