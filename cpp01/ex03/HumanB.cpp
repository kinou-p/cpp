/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:25:58 by apommier          #+#    #+#             */
/*   Updated: 2022/06/19 16:08:30 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _Weapon(NULL) 
{
}

HumanB::HumanB(const std::string name, Weapon Weapon)
{
	this->_name = name;
	this->_Weapon = &Weapon;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &newWeapon) {
	_Weapon = &newWeapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}