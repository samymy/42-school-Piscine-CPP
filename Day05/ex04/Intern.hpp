/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 22:46:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/09 22:46:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern {

public:
	Intern();
	Intern(const Intern & intern);
	~Intern();

	Intern &	operator=(const Intern & intern);

	Form*		makeForm(const std::string & formType, const std::string & formTarget);
};

#endif
