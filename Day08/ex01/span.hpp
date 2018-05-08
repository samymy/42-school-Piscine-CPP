/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 20:29:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/11 20:29:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <set>

class Span {

	std::set<int>	_ints;
	unsigned int	_size;

	Span();

public:
	Span(const Span & span);
	Span(unsigned int N);
	~Span();

	Span &	operator=(const Span & span);

	void 	addNumber(int nbr);
	int		longestSpan();
	int 	shortestSpan();
};

#endif
