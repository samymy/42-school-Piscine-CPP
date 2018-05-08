/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:57:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:57:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main()
{
	Logger		logger("./file.log");

	logger.log("standard output", "standard output test log");
	logger.log("file", "file test log");
	return (0);
}
