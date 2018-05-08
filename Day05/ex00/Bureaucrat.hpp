/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:28:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 16:28:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <fstream>

class Bureaucrat {

	const std::string	_name;
	unsigned int		_grade;

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

public:
	Bureaucrat();
	Bureaucrat(const std::string & name, unsigned int grade);
	Bureaucrat(const Bureaucrat & bureaucrat);
	~Bureaucrat();

	Bureaucrat &	operator=(const Bureaucrat & bureaucrat);

	const std::string &	getName() const;
	unsigned int		getGrade() const;

	void				incrementGrade() throw(GradeTooHighException);
	void				decrementGrade() throw(GradeTooLowException);
};

std::ostream &	operator<<(std::ostream & ostream, const Bureaucrat & bureaucrat);

#endif
