/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:06:17 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/02 08:06:19 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		login;
	std::string		postal_address;
	std::string		email_address;
	std::string		phone_number;
	std::string		birthday_date;
	std::string		favorite_meal;
	std::string		underwear_color;
	std::string		darkest_secret;

public:
	Contact();
	~Contact();
	void		display();

	void		set_first_name(std::string first_name);
	std::string	get_first_name() const;

	void		set_last_name(std::string last_name);
	std::string	get_last_name() const;

	void		set_nickname(std::string nickname);
	std::string	get_nickname() const;

	void		set_login(std::string login);
	std::string	get_login() const;

	void		set_postal_address(std::string postal_address);
	std::string	get_postal_address() const;

	void		set_email_address(std::string email_address);
	std::string	get_email_address() const;

	void		set_phone_number(std::string phone_number);
	std::string	get_phone_number() const;

	void		set_birthday_date(std::string birthday_date);
	std::string	get_birthday_date() const;

	void		set_favorite_meal(std::string favorite_meal);
	std::string	get_favorite_meal() const;

	void		set_underwear_color(std::string underwear_color);
	std::string	get_underwear_color() const;

	void		set_darkest_secret(std::string darkest_secret);
	std::string	get_darkest_secret() const;
	
};

#endif
