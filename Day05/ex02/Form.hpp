/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 18:00:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 18:00:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include <fstream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	const std::string	_name;
	std::string			_target;
	bool				_signed;
	const unsigned int	_gradeToSign;
	const unsigned int	_gradeToExecute;

public:

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException();
		GradeTooHighException(const GradeTooHighException & gradeTooHighException);
		~GradeTooHighException() throw();
		GradeTooHighException &	operator=(const GradeTooHighException & gradeTooHighException);
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException & gradeTooLowException);
		~GradeTooLowException() throw();
		GradeTooLowException &	operator=(const GradeTooLowException & gradeTooLowException);
		virtual const char* what() const throw();
	};

	Form();
	Form(const Form & form);
	Form(const std::string & name, unsigned int gradeToSign, unsigned int gradeToExecute);
	virtual ~Form();

	Form &	operator=(const Form & form);

	const std::string &		getName() const;
	bool					getSigned() const;
	unsigned int			getGradeToSign() const;
	unsigned int			getGradeToExecute() const;
	const std::string &		getTarget() const;

	void					setTarget(const std::string & target);

	virtual void			execute(Bureaucrat const & executor) const = 0;

	void					beSigned(const Bureaucrat & bureaucrat);
};

std::ostream &	operator<<(std::ostream & ostream, const Form & form);

#endif
