/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 20:54:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 20:54:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm & robotomyRequestForm);
	~RobotomyRequestForm();

	using	Form::operator=;

	void	execute(const Bureaucrat & bureaucrat) const;
};

#endif
