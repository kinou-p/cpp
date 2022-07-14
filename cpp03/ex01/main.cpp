/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 05:22:55 by apommier          #+#    #+#             */
/*   Updated: 2022/07/13 12:06:07 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap John("John");
	ScavTrap ScavJohn("CL4P-TP");
	
	John.attack("Jean");
	John.takeDamage(5);
	John.takeDamage(4);
	John.takeDamage(1);
	John.takeDamage(1);
	John.attack("Jean");

	ScavJohn.guardGate();
	ScavJohn.attack("Jean");
	ScavJohn.takeDamage(5);
	ScavJohn.takeDamage(4);
	ScavJohn.takeDamage(1);
	ScavJohn.takeDamage(1);
	ScavJohn.attack("Jean");

	return (0);
}