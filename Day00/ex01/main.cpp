/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:12:56 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/02 08:12:58 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

typedef			enum
{
	ADD,
	SEARCH,
	EXIT,
	UNDEFINED
}				command;

command			get_command(std::string command)
{
	if (!command.compare("ADD"))
		return (ADD);
	if (!command.compare("SEARCH"))
		return (SEARCH);
	if (!command.compare("EXIT"))
		return (EXIT);
	return (UNDEFINED);
}

void			check()
{
	if (std::cin.peek() == EOF)
	{
		std::cout << std::endl;
		exit(0);
	}
}

void			add_handler(PhoneBook& phone_book)
{
	Contact			contact;
	std::string		line;

	std::cout << "Enter a new contact’s informations\n";

	std::cout << "Enter first name: ";
	check();
	getline(std::cin, line);
	contact.set_first_name(line);

	std::cout << "Enter last name: ";
	check();
	getline(std::cin, line);
	contact.set_last_name(line);

	std::cout << "Enter nickname: ";
	check();
	getline(std::cin, line);
	contact.set_nickname(line);

	std::cout << "Enter login: ";
	check();
	getline(std::cin, line);
	contact.set_login(line);

	std::cout << "Enter postal address: ";
	check();
	getline(std::cin, line);
	contact.set_postal_address(line);

	std::cout << "Enter email address: ";
	check();
	getline(std::cin, line);
	contact.set_email_address(line);

	std::cout << "Enter phone number: ";
	check();
	getline(std::cin, line);
	contact.set_phone_number(line);

	std::cout << "Enter birthday date: ";
	check();
	getline(std::cin, line);
	contact.set_birthday_date(line);

	std::cout << "Enter favorite meal: ";
	check();
	getline(std::cin, line);
	contact.set_favorite_meal(line);

	std::cout << "Enter underwear color: ";
	check();
	getline(std::cin, line);
	contact.set_underwear_color(line);

	std::cout << "Enter darkest secret: ";
	check();
	getline(std::cin, line);
	contact.set_darkest_secret(line);

	phone_book.add(contact);
}

void			search_handler(PhoneBook& phone_book)
{
	Contact			desired_contact;
	std::string 	contact_idx;

	phone_book.display();

	std::cout << "Enter index of desired contact: ";
	check();
	getline(std::cin, contact_idx);
	
	desired_contact = phone_book.get(std::atoi(contact_idx.c_str()));
	desired_contact.display();
}

void			exit_handler()
{
	std::cout << "Program quit\n";
	exit(0);
}

void			undefined_handler()
{
	std::cout << "Undefined command\n";
}

int				main()
{
	PhoneBook		phone_book = PhoneBook();
	std::string		line;

	std::cout << "<===PhoneBook===>\n";
	while (1)
	{
		std::cout << "Enter command: ";
		
		check();
		getline(std::cin, line);
		switch (get_command(line))
		{
			case ADD:
				add_handler(phone_book);
				break ;

			case SEARCH:
				search_handler(phone_book);
				break ;

			case EXIT:
				exit_handler();
				break ;

			case UNDEFINED:
				undefined_handler();
				break ;
		}
	}
	return (0);
}
