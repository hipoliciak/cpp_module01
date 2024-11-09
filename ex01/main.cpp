/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:36:16 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/09 22:46:07 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int numZombies;
    std::string name;

    std::cout << "Enter the number of zombies: ";
    std::cin >> numZombies;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter the name for the zombies: ";
    std::getline(std::cin, name);

    Zombie* horde = zombieHorde(numZombies, name);

	for (int i = 0; i < numZombies; i++)
	{
		horde[i].announce();
	}

    delete[] horde;

    return 0;
}
