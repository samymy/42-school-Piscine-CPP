/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:55:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 20:55:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & presidentialPardonForm) :
	Form(presidentialPardonForm)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(const Bureaucrat & bureaucrat) const {

	if (bureaucrat.getGrade() > 5)
		throw GradeTooLowException();

	if (getSigned())
		if (bureaucrat.getGrade() <= 5)
			std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
