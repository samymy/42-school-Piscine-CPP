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
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int 	main()
{
	Bureaucrat				bureaucrat1("#1", 5);
	Bureaucrat				bureaucrat2("#2", 140);
	ShrubberyCreationForm	form1;
	RobotomyRequestForm		form2;
	PresidentialPardonForm	form3;

	form1.setTarget("target #1");
	form2.setTarget("target #2");
	form3.setTarget("target #3");

	try {
		std::cout << bureaucrat1 << std::endl;

		form1.beSigned(bureaucrat1);
		std::cout << form1 << std::endl;
		form1.execute(bureaucrat1);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << bureaucrat2 << std::endl;

		form1.beSigned(bureaucrat2);
		std::cout << form1 << std::endl;
		form1.execute(bureaucrat2);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << bureaucrat1 << std::endl;

		form2.beSigned(bureaucrat1);
		std::cout << form2 << std::endl;
		form2.execute(bureaucrat1);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << bureaucrat2 << std::endl;

		form2.beSigned(bureaucrat2);
		std::cout << form2 << std::endl;
		form2.execute(bureaucrat2);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << bureaucrat1 << std::endl;

		form3.beSigned(bureaucrat1);
		std::cout << form3 << std::endl;
		form3.execute(bureaucrat1);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << bureaucrat2 << std::endl;

		form3.beSigned(bureaucrat2);
		std::cout << form3 << std::endl;
		form3.execute(bureaucrat2);
	}
	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	return 0;
}
