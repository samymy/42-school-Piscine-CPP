/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:28:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 16:28:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int 	main()
{
	Bureaucrat	bureaucrat;

	try {
		std::cout << "Decrement test" << std::endl;
		std::cout << bureaucrat << std::endl;

		bureaucrat.decrementGrade();
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "Increment test" << std::endl;
		std::cout << bureaucrat << std::endl;

		unsigned int	iteration = 0;

		while (++iteration <= 150)
			bureaucrat.incrementGrade();
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "Constructor test" << std::endl;

		Bureaucrat	bureaucrat1("High", 0);
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "Constructor test" << std::endl;

		Bureaucrat	bureaucrat1("Low", 151);
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	return 0;
}
