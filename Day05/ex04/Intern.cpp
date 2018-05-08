/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:46:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 22:46:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern & intern)
{
	*this = intern;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern & intern) {
	(void)intern;
	return *this;
}

Form* Intern::makeForm(const std::string & formType, const std::string & formTarget) {

	Form*	form = 0;

	if (formType == "shrubbery creation")
		form = new ShrubberyCreationForm;
	if (formType == "robotomy request")
		form = new RobotomyRequestForm;
	if (formType == "presidential pardon")
		form = new PresidentialPardonForm;

	if (form) {
		form->setTarget(formTarget);
		std::cout << "Intern creates " << form->getName() << std::endl;
	}
	else
		std::cout << "Intern do not know about this form" << std::endl;

	return (form);
}


