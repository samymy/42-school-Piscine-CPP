/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:00:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 18:00:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "Form.hpp"

Form::Form() : _name("Form"), _signed(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const Form & form) : _name(form.getName()),
								_gradeToSign(form.getGradeToSign()),
								_gradeToExecute(form.getGradeToExecute())
{
	*this = form;
}

Form::Form(const std::string & name, unsigned int gradeToSign, unsigned int gradeToExecute) :
	_name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();

	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
}

Form::~Form() {}

Form & Form::operator=(const Form & form) {
	_signed = form._signed;

	return *this;
}

const std::string & Form::getName() const {
	return _name;
}

bool Form::getSigned() const {
	return _signed;
}

unsigned int Form::getGradeToSign() const {
	return _gradeToSign;
}

unsigned int Form::getGradeToExecute() const {
	return _gradeToExecute;
}

void Form::beSigned(const Bureaucrat & bureaucrat) {
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();

	_signed = true;
}

void Form::setTarget(const std::string & target) {
	_target = target;
}

const std::string & Form::getTarget() const {
	return _target;
}

std::ostream &	operator<<(std::ostream & ostream, const Form & form)
{
	ostream << form.getName();

	if (form.getSigned())
		ostream << " is signed";
	else
		ostream << " is not signed";

	return ostream;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException(
		const GradeTooHighException & gradeTooHighException) {
	*this = gradeTooHighException;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(
		const GradeTooHighException & gradeTooHighException) {
	(void)gradeTooHighException;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException(
		const GradeTooLowException & gradeTooLowException) {
	*this = gradeTooLowException;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(
		const GradeTooLowException & gradeTooLowException) {
	(void)gradeTooLowException;
	return *this;
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}
