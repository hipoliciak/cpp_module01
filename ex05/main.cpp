/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:37:40 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/10 00:18:20 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;
	std::string level;

	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");

	std::cout << "Enter your level of complaint: ";
	std::getline(std::cin, level);
	while (level != "debug" && level != "info" && level != "warning" && level != "error")
	{
		std::cout << "The level of complaint must be one of the following: debug, info, warning, error" << std::endl;
		std::cout << "Enter your level of complaint: ";
		std::getline(std::cin, level);
	}

	harl.complain(level);

	return 0;
}
