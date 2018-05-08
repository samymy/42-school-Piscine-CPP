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
#include "OfficeBlock.hpp"

int 	main()
{
	OfficeBlock		officeBlock;

	try {
		officeBlock.doBureaucracy("presidential pardon", "Test target");
	}

	catch (std::exception & exception) {
		std::cout << exception.what()  << std::endl;
	}

	Intern		intern;

	officeBlock.setIntern(&intern);

	try {
		officeBlock.doBureaucracy("presidential pardon", "Test target");
	}

	catch (std::exception & exception) {
		std::cout << exception.what()  << std::endl;
	}

	Bureaucrat		signer;

	officeBlock.setSigner(&signer);

	try {
		officeBlock.doBureaucracy("presidential pardon", "Test target");
	}

	catch (std::exception & exception) {
		std::cout << exception.what()  << std::endl;
	}

	Bureaucrat		executor;

	officeBlock.setExecutor(&executor);

	try {
		officeBlock.doBureaucracy("presidential pardon", "Test target");
	}

	catch (std::exception & exception) {
		std::cout << exception.what()  << std::endl;
	}

	return 0;
}
