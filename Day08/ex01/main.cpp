/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 20:29:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 20:29:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int		main() {

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span	test(1);

	test.addNumber(1);

	try {
		std::cout << "Overflow test" << std::endl;
		test.addNumber(3);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	Span	test1(3);

	test1.addNumber(1);

	try {
		std::cout << "Dublicate test" << std::endl;
		test1.addNumber(1);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "Too few elements test" << std::endl;
		std::cout << test.shortestSpan() << std::endl;
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "Too few elements test" << std::endl;
		std::cout << test.longestSpan() << std::endl;
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	Span	test10000(10000);

	for (int i = 0; i < 10000; ++i)
		test10000.addNumber(i + 1);

	std::cout << "10000 test" << std::endl;
	std::cout << test10000.shortestSpan() << std::endl;
	std::cout << test10000.longestSpan() << std::endl;
}
