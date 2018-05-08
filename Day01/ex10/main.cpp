/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 23:05:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 23:05:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int		checkFile(std::ifstream& file, std::string filename)
{
	if (!file.is_open())
	{
		std::perror(("cato9tails: " + filename).c_str());
		return (0);
	}
	return (1);
}

int 	main(int argc, char **argv)
{
	std::string		line;

	if (argc == 1)
		while (getline(std::cin, line))
			std::cout << line << std::endl;

	for (int arg = 1; arg < argc; ++arg)
	{
		std::ifstream	file(argv[arg]);

		if (!checkFile(file, argv[arg]))
			continue ;
		while (getline(file, line))
			std::cout << line << std::endl;
		file.close();
	}
}
