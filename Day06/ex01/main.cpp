/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 11:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 11:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

void* serialize() {

	char*	serializedData = new char[20];

	for (int byte = 0; byte < 20; ++byte)
	{
		if (rand() % 2)
			serializedData[byte] = (rand() % 10 + 48);
		else
		{
			if (rand() % 2)
				serializedData[byte] = (rand() % 26 + 65);
			else
				serializedData[byte] = (rand() % 26 + 97);
		}
	}

	return reinterpret_cast<void*>(serializedData);
}

Data* deserialize(void* raw) {

	Data*	data = new Data;
	char*	serializedData = reinterpret_cast<char*>(raw);

	for (int byte = 0; byte < 8; ++byte)
		data->s1 += serializedData[byte];

	data->n = *reinterpret_cast<int*>(&serializedData[8]);

	for (int byte = 12; byte < 20; ++byte)
		data->s2 += serializedData[byte];

	return (data);
}

int		main() {
	srand(time(0));

	void *serializedData = serialize();
	Data *data = deserialize(serializedData);

	std::cout << "Data:" << std::endl;
	std::cout << "s1:\t" << data->s1 << std::endl;
	std::cout << "n:\t" << data->n << std::endl;
	std::cout << "s2:\t" << data->s2 << std::endl;

	delete data;

	return 0;
}