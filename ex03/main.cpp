/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:58:54 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/09 23:13:07 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{

	Weapon club = Weapon("crude spiked club");
	Weapon sword = Weapon("sword");

	HumanA bob("Bob", club);
	HumanB jim("Jim");

	jim.setWeapon(sword);

	bob.attack();
	jim.attack();

	club.setType("some other type of club");
	sword.setType("some other type of sword");

	bob.attack();
	jim.attack();

	jim.setWeapon(club);

	bob.attack();
	jim.attack();

	return 0;
}

// int main(void)
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// 	return 0;
// }
