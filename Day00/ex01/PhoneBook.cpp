/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:49:10 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/02 08:49:11 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int				PhoneBook::empty_contact_idx = 0;

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void			PhoneBook::add(const Contact& contact)
{
	if (empty_contact_idx >= phone_book_size)
	{
		std::cout << "Phone book is full\n";
		return ;
	}
	contacts[empty_contact_idx] = contact;
	std::cout << "Contact added\n";
	empty_contact_idx++;
}

const Contact&	PhoneBook::get(int contact_idx)
{
	if (contact_idx <= 0 || contact_idx > phone_book_size)
		return (contacts[phone_book_size]);
	return (contacts[contact_idx - 1]);
}

void			PhoneBook::display()
{
	std::cout << std::setw(10) << "index" << '|';
	std::cout << std::setw(10) << "first name" << '|';
	std::cout << std::setw(10) << "last name" << '|';
	std::cout << std::setw(10) << "nickname" << std::endl;

	int		contact_idx = 0;
	while (contact_idx < empty_contact_idx)
	{
		std::cout << std::setw(10) << contact_idx + 1 << '|';
		if (contacts[contact_idx].get_first_name().size() > 10)
			std::cout << std::setw(10) << contacts[contact_idx].get_first_name().substr(0, 9) + '.' << '|';
		else
			std::cout << std::setw(10) << contacts[contact_idx].get_first_name() << '|';
		if (contacts[contact_idx].get_last_name().size() > 10)
			std::cout << std::setw(10) << contacts[contact_idx].get_last_name().substr(0, 9) + '.' << '|';
		else
			std::cout << std::setw(10) << contacts[contact_idx].get_last_name() << '|';
		if (contacts[contact_idx].get_nickname().size() > 10)
			std::cout << std::setw(10) << contacts[contact_idx].get_nickname().substr(0, 9) + '.' << '|';
		else
			std::cout << std::setw(10) << contacts[contact_idx].get_nickname() << std::endl;
		contact_idx++;
	}
}
