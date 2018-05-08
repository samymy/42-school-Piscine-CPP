/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:45:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 20:45:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm & shrubberyCreationForm);
	~ShrubberyCreationForm();

	using	Form::operator=;

	void 	execute(const Bureaucrat & bureaucrat) const;
};

#endif
