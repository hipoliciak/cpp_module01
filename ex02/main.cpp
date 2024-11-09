/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:49:14 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/09 22:55:40 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	// Displaying the address of the string
	std::cout << "Address of the string: " << &str << std::endl;
	std::cout << "Address of the string pointer: " << stringPTR << std::endl;
	std::cout << "Address of the string reference: " << &stringREF << std::endl;

	// Displaying the values of the string
	std::cout << "String: " << str << std::endl;
	std::cout << "String pointer: " << *stringPTR << std::endl;
	std::cout << "String reference: " << stringREF << std::endl;

	return 0;
}
