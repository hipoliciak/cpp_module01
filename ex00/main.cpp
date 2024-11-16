/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:36:16 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/16 13:41:31 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie *zombie;

	if (argc != 2)
	{
		std::cout << "Usage: ./zombie name" << std::endl;
		return 1;
	}	
	randomChump(argv[1]);
	zombie = newZombie(argv[1]);
	zombie->announce();
	delete zombie;

	return 0;
}
