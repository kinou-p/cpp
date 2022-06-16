/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:13:13 by apommier          #+#    #+#             */
/*   Updated: 2022/06/16 22:25:56 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string name): _type(name) {
	
}

Weapon::~Weapon() {

}

const std::string  &getType(void)
{
	return (this->_type);
}

void setType(const std::string &type)
{
	this->_type = type;
}