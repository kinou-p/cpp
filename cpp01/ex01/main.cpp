/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:30:06 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 13:14:47 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Horde;
	int		nbZombie = 10;
	
	std::cout <<  "--Zombie Horde--" << std::endl;
	Horde = zombieHorde(nbZombie, "Bob");
	for (int i = 0; i < nbZombie; i++)
	{
		std::cout << i << " ";
		Horde[i].announce();
	}
	delete[] Horde;
	
	nbZombie = 20;
	std::cout << std::endl <<  "--Zombie Horde2--" << std::endl;
	Horde = zombieHorde(nbZombie, "Bob2");
	for (int i = 0; i < nbZombie; i++)
	{
		std::cout << i << " ";
		Horde[i].announce();
	}
	delete[] Horde;
	
	return (0);
}