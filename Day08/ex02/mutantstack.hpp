/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:10:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/12 13:10:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() {}
	MutantStack(const MutantStack<T> & mutantStack) : std::stack<T>(mutantStack) {}
	~MutantStack() {}

	using	std::stack<T>::operator=;

	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin() {
		return std::stack<T>::c.begin();
	}

	iterator	end() {
		return std::stack<T>::c.end();
	}
};

#endif
