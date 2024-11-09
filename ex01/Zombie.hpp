/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:37:32 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/11/09 22:44:31 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <limits>

class Zombie {
	public:
		Zombie();
		~Zombie();

		std::string setName(std::string name);
		std::string getName() const;
		void announce() const;

	private:
		std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif