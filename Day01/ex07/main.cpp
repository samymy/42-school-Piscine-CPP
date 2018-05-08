/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:05:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 19:05:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "func.hpp"

int 	main(int argc, char **argv)
{
	checkArgumentCount(argc);

	std::ifstream	ifstream(argv[1]);
	checkIFileStream(ifstream);

	std::string		from(argv[2]);
	std::string		to(argv[3]);
	checkStrings(from, to);

	std::ofstream	ofstream((std::string(argv[1]) + ".replace").c_str());
	checkOFileStream(ofstream, ifstream);

	std::string		line;
	while (getline(ifstream, line))
	{
		replaceAll(line, from, to);
		ofstream << line << std::endl;
	}

	ifstream.close();
	ofstream.close();
	return (0);
}
