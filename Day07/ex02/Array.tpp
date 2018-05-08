/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 16:42:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 16:42:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include "Array.hpp"

template <typename T>
Array<T>::Array() {
	_array = 0;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {

	if (n)
		_array = new T[n]();
	else
		_array = 0;

	_size = n;
}

template <typename T>
Array<T>::Array(const Array<T> & array) {
	*this = array;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> & array) {

	delete [] _array;
	_array = new T[array.size()]();

	for (unsigned int i = 0; i < array.size(); ++i)
		_array[i] = array._array[i];
	_size = array.size();

	return *this;
}

template <typename T>
Array<T>::~Array() {
	delete [] _array;
}

template <typename T>
T & Array<T>::operator[](unsigned int index) {

	if (index >= _size)
		throw std::range_error("Index is out of bounds");

	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}
