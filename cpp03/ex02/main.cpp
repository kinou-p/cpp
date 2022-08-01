/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 05:22:55 by apommier          #+#    #+#             */
/*   Updated: 2022/08/01 22:12:59 by apommier         ###   ########.fr       */
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
	John.attack("Jean");
	John.beRepaired(100);
	
	std::cout << std::endl;
	ClapTrap John2(John);
	John2.attack("Jean");
	John2.takeDamage(5);
	John2.beRepaired(100);

	std::cout << std::endl;
	ClapTrap John3("John3");
	John3.beRepaired(100);
	John3.attack("Jean");
	John3.beRepaired(100);
	John3.attack("Jean");
	John3.beRepaired(100);
	John3.attack("Jean");
	John3.beRepaired(100);
	John3.attack("Jean");
	John3.beRepaired(100);
	John3.attack("Jean");
	std::cout << std::endl;
	John3.beRepaired(100);
	John3.attack("Jean");
	John3.takeDamage(100);

	std::cout << std::endl << "ScavTrap turn\n";
	ScavTrap ScavJohn("CL4P-TP");

	ScavJohn.guardGate();
	ScavJohn.attack("Jean");
	ScavJohn.takeDamage(5);
	ScavJohn.takeDamage(4);
	ScavJohn.takeDamage(1);
	ScavJohn.attack("Jean");
	ScavJohn.beRepaired(100);
	std::cout <<"ScavTrap have " << ScavJohn.getEnergyPoints() << " energy point(s)\n\n";

	std::cout << std::endl << "FragTrap turn\n";
	FragTrap FragJohn("Assassin");

	FragJohn.highFivesGuys();
	FragJohn.attack("Jean");
	FragJohn.takeDamage(5);
	FragJohn.takeDamage(4);
	FragJohn.takeDamage(1);
	FragJohn.takeDamage(1);
	FragJohn.attack("Jean");
	std::cout <<"ScavTrap have " << FragJohn.getEnergyPoints() << " energy point(s)\n\n";
	std::cout << std::endl;
	
	return (0);
}

// int main()
// {
// 	ClapTrap John("John");
	
// 	John.attack("Jean");
// 	John.takeDamage(5);
// 	John.takeDamage(4);
// 	John.takeDamage(1);
// 	John.takeDamage(1);
// 	John.attack("Jean");
	
// 	std::cout << std::endl;
// 	ScavTrap ScavJohn("CL4P-TP");
	
// 	ScavJohn.guardGate();
// 	ScavJohn.attack("Jean");
// 	ScavJohn.takeDamage(5);
// 	ScavJohn.takeDamage(4);
// 	ScavJohn.takeDamage(1);
// 	ScavJohn.takeDamage(1);
// 	ScavJohn.attack("Jean");

// 	std::cout << std::endl;
// 	FragTrap FragJohn("Assassin");

// 	FragJohn.highFivesGuys();
// 	FragJohn.attack("Jean");
// 	FragJohn.takeDamage(5);
// 	FragJohn.takeDamage(4);
// 	FragJohn.takeDamage(1);
// 	FragJohn.takeDamage(1);
// 	FragJohn.attack("Jean");

// 	return (0);
// }