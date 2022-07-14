/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 05:22:55 by apommier          #+#    #+#             */
/*   Updated: 2022/07/14 01:58:00 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap John("John");
	
	John.attack("Jean");
	John.takeDamage(5);
	John.takeDamage(4);
	John.takeDamage(1);
	John.takeDamage(1);
	John.attack("Jean");
	
	std::cout << std::endl;
	ScavTrap ScavJohn("CL4P-TP");
	
	ScavJohn.guardGate();
	ScavJohn.attack("Jean");
	ScavJohn.takeDamage(5);
	ScavJohn.takeDamage(4);
	ScavJohn.takeDamage(1);
	ScavJohn.takeDamage(1);
	ScavJohn.attack("Jean");

	std::cout << std::endl;
	FragTrap FragJohn("Assassin");

	FragJohn.highFivesGuys();
	FragJohn.attack("Jean");
	FragJohn.takeDamage(5);
	FragJohn.takeDamage(4);
	FragJohn.takeDamage(1);
	FragJohn.takeDamage(1);
	FragJohn.attack("Jean");

	return (0);
}