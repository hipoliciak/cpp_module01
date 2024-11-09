/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:18:39 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/09 22:46:46 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Invalid number of zombies." << std::endl;
		return NULL;
	}
	Zombie* horde_member;

	horde_member = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde_member[i].setName(name);
	}
	return horde_member;
}
