/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:46:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 20:46:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & shrubberyCreationForm) :
	Form(shrubberyCreationForm)
{}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(const Bureaucrat & bureaucrat) const {

	if (bureaucrat.getGrade() > 137)
		throw GradeTooLowException();

	if (getSigned())
		if (bureaucrat.getGrade() <= 137) {

			std::string	filename = getTarget() + "_shrubbery";
			std::ofstream	ofstream(filename.c_str());

			if (ofstream.is_open())
			{
				ofstream << "  *  " << std::endl;
				ofstream << " *** " << std::endl;
				ofstream << "*****" << std::endl;

				ofstream.close();
			}
		}
}
