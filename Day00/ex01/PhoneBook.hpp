/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 08:49:04 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/02 08:49:06 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	static const int	phone_book_size = 8;
	Contact				contacts[phone_book_size + 1];
	static int			empty_contact_idx;

public:
	PhoneBook();
	~PhoneBook();
	void			add(const Contact& contact);
	const Contact&	get(int contact_idx);
	void			display();
};

#endif
