/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:56:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:56:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <fstream>

class Logger
{
	std::string						_filename;
	std::ofstream					_ofstream;

	void 							logToConsole(std::string logMessage);
	void 							logToFile(std::string logMessage);
	std::string						makeLogEntry(std::string logMessage);

public:
	Logger(std::string filename);
	~Logger();
	void 							log(std::string const & dest, std::string const & message);
};

#endif
