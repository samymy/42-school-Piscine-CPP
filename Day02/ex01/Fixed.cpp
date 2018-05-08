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
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = fixed;
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;

	this->_raw = (nbr << this->_fractionalBits);
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;

	this->_raw = roundf(nbr * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &object)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_raw = object.getRawBits();

	return (*this);
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

std::ostream&	operator<<(std::ostream& ostream, const Fixed& fixed)
{
	ostream << fixed.toFloat();

	return (ostream);
}
