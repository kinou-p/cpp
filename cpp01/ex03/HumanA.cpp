/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:20:34 by apommier          #+#    #+#             */
/*   Updated: 2022/06/16 23:41:51 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon Weapon)
{
	this->_name = name;
	this->_Weapon = &Weapon.getType();
}

HumanA::~HumanA(void)
{

}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon << std::endl;
}