/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 20:29:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 20:29:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <algorithm>
#include "span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(const Span & span) {
	*this = span;
}

Span::~Span() {}

Span & Span::operator=(const Span & span) {

	_ints = std::set<int>(span._ints);
	_size = span._size;

	return *this;
}

void Span::addNumber(int nbr) {

	if (_ints.size() == _size)
		throw std::range_error("Size is maximum");

	if (!_ints.insert(nbr).second)
		throw std::logic_error("Number is dublicate");
}

int 	Span::longestSpan() {

	if (_ints.size() < 2)
		throw std::logic_error("Too few elements");

	return *--_ints.end() - *_ints.begin();
}

int Span::shortestSpan() {

	if (_ints.size() < 2)
		throw std::logic_error("Too few elements");

	int 	_shortestSpan;

	_shortestSpan = 1;
	while (std::find(_ints.begin(), _ints.end(), *_ints.begin() + _shortestSpan) == _ints.end())
		_shortestSpan++;

	return _shortestSpan;
}
