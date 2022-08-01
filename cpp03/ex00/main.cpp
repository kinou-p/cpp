/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 05:22:55 by apommier          #+#    #+#             */
/*   Updated: 2022/08/01 12:59:35 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

	
	return (0);
}