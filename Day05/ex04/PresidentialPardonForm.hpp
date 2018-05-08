/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:55:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 20:55:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public  Form {

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm & presidentialPardonForm);
	~PresidentialPardonForm();

	using	Form::operator=;

	void	execute(const Bureaucrat & bureaucrat) const;
};

#endif
