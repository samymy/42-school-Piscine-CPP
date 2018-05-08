/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:56:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/04 11:56:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _raw(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int nbr)
{
	this->_raw = (nbr << this->_fractionalBits);
}

Fixed::Fixed(const float nbr)
{
	this->_raw = roundf(nbr * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw = raw;
}

int Fixed::toInt() const
{
	return (this->_raw >> this->_fractionalBits);
}

float Fixed::toFloat() const
{
	return ((float)this->_raw / (1 << this->_fractionalBits));
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed& Fixed::operator=(const Fixed &object)
{
	this->_raw = object.getRawBits();

	return (*this);
}

bool Fixed::operator>(const Fixed &object) const
{
	return (this->_raw > object._raw);
}

bool Fixed::operator<(const Fixed &object) const
{
	return (this->_raw < object._raw);
}

bool Fixed::operator>=(const Fixed &object) const
{
	return (this->_raw >= object._raw);
}

bool Fixed::operator<=(const Fixed &object) const
{
	return (this->_raw <= object._raw);
}

bool Fixed::operator==(const Fixed &object) const
{
	return (this->_raw == object._raw);
}

bool Fixed::operator!=(const Fixed &object) const
{
	return (this->_raw != object._raw);
}

Fixed Fixed::operator+(const Fixed &object) const
{
	Fixed	fixed;

	fixed.setRawBits(this->_raw + object._raw);

	return (fixed);
}

Fixed Fixed::operator-(const Fixed &object) const
{
	Fixed	fixed;

	fixed.setRawBits(this->_raw - object._raw);

	return (fixed);
}

Fixed Fixed::operator*(const Fixed &object) const
{
	Fixed	fixed;

	fixed.setRawBits((this->_raw * object._raw) >> this->_fractionalBits);

	return (fixed);
}

Fixed Fixed::operator/(const Fixed &object) const
{
	Fixed	fixed;

	fixed.setRawBits((this->_raw << this->_fractionalBits) / object._raw);

	return (fixed);
}

Fixed& Fixed::operator++()
{
	this->_raw++;

	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	fixedCopy;

	fixedCopy = *this;
	this->_raw++;

	return (fixedCopy);
}

Fixed& Fixed::operator--()
{
	this->_raw--;

	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	fixedCopy;

	fixedCopy = *this;
	this->_raw--;

	return (fixedCopy);
}

std::ostream&	operator<<(std::ostream& ostream, const Fixed& fixed)
{
	ostream << fixed.toFloat();

	return (ostream);
}
