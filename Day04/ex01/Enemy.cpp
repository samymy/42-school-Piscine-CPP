/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 22:33:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/05 22:33:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() {}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {}

Enemy::Enemy(const Enemy & enemy)
{
	*this = enemy;
}

Enemy::~Enemy() {}

Enemy & Enemy::operator=(const Enemy & enemy)
{
	this->_hp = enemy._hp;
	this->_type = enemy._type;

	return *this;
}

int Enemy::getHP() const
{
	return _hp;
}

std::string const & Enemy::getType() const
{
	return _type;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;

	if (damage > _hp)
		_hp = 0;
	else
		_hp -= damage;
}