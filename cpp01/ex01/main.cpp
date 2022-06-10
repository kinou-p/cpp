/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:30:06 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 14:05:05 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Horde;
	int		nbZombie = 10;
	
	std::cout <<  "--Zombie Horde--" << std::endl;
	Horde = zombieHorde(nbZombie, "Bob");
	delete[] Horde;
	return (0);
}