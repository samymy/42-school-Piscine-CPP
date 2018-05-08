/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:55:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/04 11:55:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	int					_raw;
	static const int 	_fractionalBits = 8;

public:
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed& fixed);
	~Fixed();

	Fixed&	operator=(const Fixed& object);

	int 	getRawBits() const;
	void	setRawBits(int const raw);

	int		toInt() const;
	float	toFloat() const;

};

std::ostream&	operator<<(std::ostream& ostream, const Fixed& fixed);

#endif
