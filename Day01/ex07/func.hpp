/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdubinki <vdubinki@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 21:15:00 by vdubinki          #+#    #+#             */
/*   Updated: 2018/04/03 21:15:00 by vdubinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_HPP
# define FUNC_HPP

#include <iostream>
#include <cstdlib>
#include <fstream>

void	replaceAll(std::string &str, const std::string &from, const std::string &to);
void	checkIFileStream(std::ifstream& ifstream);
void	checkOFileStream(std::ofstream& ofstream, std::ifstream& ifstream);
void	checkStrings(std::string from, std::string to);
void	checkArgumentCount(int argc);

#endif
