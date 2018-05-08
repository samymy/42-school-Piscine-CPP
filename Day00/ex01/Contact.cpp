/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:06:23 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/02 08:06:25 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void			Contact::display()
{
	if (this->first_name.compare(""))
		std::cout << "first name:\t\t" << this->first_name << std::endl;
	if (this->last_name.compare(""))
		std::cout << "last name:\t\t" << this->last_name << std::endl;
	if (this->nickname.compare(""))
		std::cout << "nickname:\t\t" << this->nickname << std::endl;
	if (this->login.compare(""))
		std::cout << "login:\t\t\t" << this->login << std::endl;
	if (this->postal_address.compare(""))
		std::cout << "postal address:\t\t" << this->postal_address << std::endl;
	if (this->email_address.compare(""))
		std::cout << "email address:\t\t" << this->email_address << std::endl;
	if (this->phone_number.compare(""))
		std::cout << "phone number:\t\t" << this->phone_number << std::endl;
	if (this->birthday_date.compare(""))
		std::cout << "birthday date:\t\t" << this->birthday_date << std::endl;
	if (this->favorite_meal.compare(""))
		std::cout << "favorite meal:\t\t" << this->favorite_meal << std::endl;
	if (this->underwear_color.compare(""))
		std::cout << "underwear color:\t" << this->underwear_color << std::endl;
	if (this->darkest_secret.compare(""))
		std::cout << "darkest secret:\t\t" << this->darkest_secret << std::endl;
}

void			Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

std::string		Contact::get_first_name() const
{
	return (this->first_name);
}

void			Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

std::string		Contact::get_last_name() const
{
	return (this->last_name);
}

void			Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string		Contact::get_nickname() const
{
	return (this->nickname);
}

void			Contact::set_login(std::string login)
{
	this->login = login;
}

std::string		Contact::get_login() const
{
	return (this->login);
}

void			Contact::set_postal_address(std::string postal_address)
{
	this->postal_address = postal_address;
}

std::string		Contact::get_postal_address() const
{
	return (this->postal_address);
}

void			Contact::set_email_address(std::string email_address)
{
	this->email_address = email_address;
}

std::string		Contact::get_email_address() const
{
	return (this->email_address);
}

void			Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string		Contact::get_phone_number() const
{
	return (this->phone_number);
}

void			Contact::set_birthday_date(std::string birthday_date)
{
	this->birthday_date = birthday_date;
}

std::string		Contact::get_birthday_date() const
{
	return (this->birthday_date);
}

void			Contact::set_favorite_meal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

std::string		Contact::get_favorite_meal() const
{
	return (this->favorite_meal);
}

void			Contact::set_underwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

std::string		Contact::get_underwear_color() const
{
	return (this->underwear_color);
}

void			Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string		Contact::get_darkest_secret() const
{
	return (this->darkest_secret);
}
