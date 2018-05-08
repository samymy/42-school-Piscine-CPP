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

int 	main()
{
	Bureaucrat	bureaucrat("#1", 15);
	Form		form1("Form #1", 10, 3);
	Form		form2("Form #2", 40, 10);

	std::cout << bureaucrat << std::endl;

	try {
		std::cout << "Form #1" << std::endl;
		std::cout << form1 << std::endl;

		form1.beSigned(bureaucrat);
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	try {
		std::cout << "Form #2" << std::endl;
		std::cout << form2 << std::endl;

		form2.beSigned(bureaucrat);
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	bureaucrat.signForm(form1);
	bureaucrat.signForm(form2);

	return 0;
}
