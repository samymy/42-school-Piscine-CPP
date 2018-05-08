/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:15:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:15:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

void	replaceAll(std::string &str, const std::string &from, const std::string &to)
{
	size_t	pos;

	pos = 0;
	while ((pos = str.find(from, pos)) != std::string::npos)
	{
		str.replace(pos, from.length(), to);
		pos += to.length();
	}
}

void	checkIFileStream(std::ifstream& ifstream)
{
	if (!ifstream.is_open())
	{
		std::cout << "Unable to open file" << std::endl;
		exit(0);
	}
}

void	checkOFileStream(std::ofstream& ofstream, std::ifstream& ifstream)
{
	if (!ofstream.is_open())
	{
		std::cout << "Unable to open file" << std::endl;
		ifstream.close();
		exit(0);
	}
}

void	checkStrings(std::string from, std::string to)
{
	if (from.empty() || to.empty())
	{
		std::cout << "Strings must be no empty" << std::endl;
		exit(0);
	}
}

void	checkArgumentCount(int argc)
{
	if (argc != 4)
	{
		std::cout << "usage: ./replace <filename> <string to find> <string to replace>" << std::endl;
		exit(0);
	}
}
