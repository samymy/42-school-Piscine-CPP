/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:33:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:33:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{
	Enemy();

protected:
	int				_hp;
	std::string		_type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy & enemy);
	virtual ~Enemy();

	Enemy & operator=(const Enemy & enemy);

	int 					getHP() const ;
	std::string const &		getType() const;

	virtual void			takeDamage(int);
};

#endif
