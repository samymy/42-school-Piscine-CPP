/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:28:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 16:28:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void 	iter(T* arr, unsigned int size, void (*func)(T &)) {

	for (unsigned int i = 0; i < size; ++i)
		func(arr[i]);
}

#include <iostream>

template	<typename T>
void	display(T & arg) {
	std::cout << "\t" << arg;
}

int 	main() {

	int 	intArr[] = { 1, 2, 3, 4, 5 };

	iter(intArr, sizeof(intArr) / sizeof(intArr[0]), display);
	std::cout << std::endl;

	double 	doubleArr[] = { 1.5, 2.0, 19, 25.17, 15.001 };

	iter(doubleArr, sizeof(doubleArr) / sizeof(doubleArr[0]), display);
	std::cout << std::endl;

	std::string		stringArr[] = { "#1", "#2", "#2" };

	iter(stringArr, sizeof(stringArr) / sizeof(stringArr[0]), display);
	std::cout << std::endl;

	return 0;
}
