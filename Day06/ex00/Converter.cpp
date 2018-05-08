/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 08:18:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/10 08:18:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const std::string & str) : _str(str) {}

Converter::Converter(const Converter & converter)
{
	*this = converter;
}

Converter::~Converter() {}

Converter & Converter::operator=(const Converter & converter)
{
	_str = converter._str;

	return *this;
}

char Converter::toChar() const
{
	int		_int;

	try {
		_int = std::stoi(_str);
	}

	catch (std::exception & exception) {
		throw Converter::ConversionImpossible();
	}

	if (_int < std::numeric_limits<char>::min() || _int > std::numeric_limits<char>::max())
		throw Converter::ConversionImpossible();

	return static_cast<char>(_int);
}

int Converter::toInt() const
{
	int		_int;

	try {
		_int = std::stoi(_str);
	}

	catch (std::exception & exception) {
		throw Converter::ConversionImpossible();
	}

	return _int;
}

float Converter::toFloat() const
{
	long double		_longDouble;

	try {
		_longDouble = std::stold(_str);
	}

	catch (std::exception & exception) {
		throw Converter::ConversionImpossible();
	}

	return static_cast<float>(_longDouble);
}

double Converter::toDouble() const
{
	long double		_longDouble;

	try {
		_longDouble = std::stold(_str);
	}

	catch (std::exception & exception) {
		throw Converter::ConversionImpossible();
	}

	return static_cast<double>(_longDouble);
}

std::ostream &	operator<<(std::ostream & ostream, const Converter & converter)
{
	ostream << "char: ";

	try {
		char	_char = converter.toChar();

		if (std::isprint(_char))
			ostream << "\'" << _char << "\'" << std::endl;
		else
			ostream << "Non displayable" << std::endl;
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	ostream << "int: ";

	try {
		int		_int = converter.toInt();

		ostream << _int << std::endl;
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	ostream << "float: ";

	try {
		float	_float = converter.toFloat();

		if (_float - static_cast<int>(_float))
			ostream << _float << "f" << std::endl;
		else
			ostream << _float << ".0f" << std::endl;
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	ostream << "double: ";

	try {
		double	_double = converter.toDouble();

		if (_double - static_cast<int>(_double))
			ostream << _double << std::endl;
		else
			ostream << _double << ".0" << std::endl;
	}

	catch (std::exception & exception) {
		std::cout << exception.what() << std::endl;
	}

	return ostream;
}

Converter::ConversionImpossible::ConversionImpossible() {}

Converter::ConversionImpossible::ConversionImpossible(const ConversionImpossible & conversionImpossible)
{
	*this = conversionImpossible;
}

Converter::ConversionImpossible::~ConversionImpossible() throw() {}

Converter::ConversionImpossible & Converter::ConversionImpossible::operator=(const ConversionImpossible & conversionImpossible)
{
	(void)conversionImpossible;

	return *this;
}

const char* Converter::ConversionImpossible::what() const throw()
{
	return "conversion is impossible";
}
