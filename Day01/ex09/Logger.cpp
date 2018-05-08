/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:57:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:57:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <ctime>
#include <sstream>
#include "Logger.hpp"

Logger::Logger(std::string filename) : _filename(filename)
{
	this->_ofstream.open(this->_filename.c_str(), std::ios_base::out);
}

Logger::~Logger()
{
	if (this->_ofstream.is_open())
		this->_ofstream.close();
}

void Logger::logToConsole(std::string logMessage)
{
	std::cout << this->makeLogEntry(logMessage) << std::endl;
}

void Logger::logToFile(std::string logMessage)
{
	if (this->_ofstream.is_open())
		this->_ofstream<< this->makeLogEntry(logMessage) << std::endl;
}

std::string Logger::makeLogEntry(std::string logMessage)
{
	time_t	time = std::time(0);
	tm		*time_ptr = localtime(&time);
	char	data[25];

	strftime(data, 25, "[%G-%m-%d %H:%M:%S]", time_ptr);

	return (std::string(data) + "	" + logMessage);
}

void Logger::log(std::string const &dest, std::string const &message)
{
	std::string		outputTypes[] =
			{
					"standard output",
					"file"
			};

	void			(Logger::*outputs[])(std::string) =
			{
					&Logger::logToConsole,
					&Logger::logToFile
			};

	for (int output = 0; output < 2; ++output)
		if (outputTypes[output] == dest)
			(this->*outputs[output])(message);
}