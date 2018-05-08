/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:42:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 16:42:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

	T*				_array;
	unsigned int	_size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array<T> & array);
	~Array();

	Array &	operator=(const Array & array);

	T &   	operator[](unsigned int);

	unsigned int	size() const;
};

#include "Array.tpp"

#endif
