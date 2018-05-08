/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:18:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 08:18:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>

class Converter {
	Converter();

	std::string		_str;

public:

	class ConversionImpossible : public std::exception {

	public:
		ConversionImpossible();
		ConversionImpossible(const ConversionImpossible & conversionImpossible);
		~ConversionImpossible() throw();
		ConversionImpossible &	operator=(const ConversionImpossible & conversionImpossible);
		virtual const char* what() const throw();
	};

	Converter(const std::string & str);
	Converter(const Converter & converter);
	~Converter();

	Converter &	operator=(const Converter & converter);

	char		toChar() const;
	int			toInt() const;
	float		toFloat() const;
	double		toDouble() const;
};

std::ostream &	operator<<(std::ostream & ostream, const Converter & converter);

#endif
