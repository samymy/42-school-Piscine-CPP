/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 16:28:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 16:28:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"

int 	main()
{
	Intern intern;
	Form* form;

	form = intern.makeForm("shrubbery creation", "target");
	delete form;

	form = intern.makeForm("robotomy request", "target");
	delete form;

	form = intern.makeForm("presidential pardon", "target");
	delete form;

	form = intern.makeForm("unknown", "target");
	delete form;

	return 0;
}
