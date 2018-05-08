/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 12:32:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 12:32:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

Base* generate() {

	int		randNBR = rand() % 300;

	if (randNBR % 3 == 0)
		return new A;
	if (randNBR % 3 == 1)
		return new B;
	return new C;
}

void identify_from_pointer(Base* p) {

	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base& p) {

	identify_from_pointer(&p);
}

int		main() {
	srand(time(0));

	for (int i = 1; i <= 5; ++i)
	{
		std::cout << i << std::endl;

		Base*	base = generate();

		identify_from_pointer(base);
		identify_from_reference(*base);

		delete base;
	}

	return 0;
}
