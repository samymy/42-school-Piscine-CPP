/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:54:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 20:54:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & robotomyRequestForm) :
	Form(robotomyRequestForm)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(const Bureaucrat & bureaucrat) const {

	if (bureaucrat.getGrade() > 45)
		throw GradeTooLowException();

	if (getSigned())
		if (bureaucrat.getGrade() <= 45)
		{
			std::cout << "Some drilling noises" << std::endl;

			if (rand() % 2)
				std::cout << getTarget() << " has been robotomized successfully" << std::endl;
			else
				std::cout << getTarget() << " has not been robotomized successfully" << std::endl;
		}
}
