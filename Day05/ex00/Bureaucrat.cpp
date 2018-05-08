/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:28:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 16:28:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Ingognito"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string & name, unsigned int grade) : _name(name) {

	if (grade > 150)
		throw GradeTooLowException();

	if (grade < 1)
		throw GradeTooHighException();

	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & bureaucrat) {
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & bureaucrat) {
	_grade = bureaucrat._grade;

	return *this;
}

const std::string & Bureaucrat::getName() const {
	return _name;
}

unsigned int Bureaucrat::getGrade() const {
	return _grade;
}

void Bureaucrat::incrementGrade() throw(GradeTooHighException) {
	if (_grade == 1)
		throw GradeTooHighException();

	_grade -= 1;
}

void Bureaucrat::decrementGrade() throw(GradeTooLowException) {
	if (_grade == 150)
		throw GradeTooLowException();

	_grade += 1;
}

std::ostream &	operator<<(std::ostream & ostream, const Bureaucrat & bureaucrat) {
	ostream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();

	return ostream;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(
		const GradeTooHighException & gradeTooHighException) {
	*this = gradeTooHighException;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(
		const GradeTooHighException & gradeTooHighException) {
	(void)gradeTooHighException;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(
		const GradeTooLowException & gradeTooLowException) {
	*this = gradeTooLowException;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(
		const GradeTooLowException & gradeTooLowException) {
	(void)gradeTooLowException;
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}
