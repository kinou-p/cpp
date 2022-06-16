/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:25:58 by apommier          #+#    #+#             */
/*   Updated: 2022/06/16 23:42:41 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(const std::string name)
{
	this->_name = name;
	//this->_Weapon = NULL;
}

HumanB::HumanB(const std::string name, Weapon Weapon)
{
	this->_name = name;
	this->_Weapon = Weapon.getType();
}

HumanB::~HumanB(void)
{
	
}

void	HumanB::setWeapon(Weapon Weapon)
{
	this->_Weapon = Weapon.getType();
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_Weapon << std::endl;
}