/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:13:13 by apommier          #+#    #+#             */
/*   Updated: 2022/06/19 15:54:48 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon() : _type("words"){
	return;
}
Weapon::Weapon(std::string type) : _type(type){
	return;
}

Weapon::~Weapon() {
	return;
}
/*Weapon::Weapon(std::string name): _type(name) {
	
}

Weapon::~Weapon() {

}*/

 const std::string&  Weapon::getType(void) const
{
	return (this->_type);
}

/*void Weapon::setType(const std::string type)
{
	this->_type = type;
}*/

void				Weapon::setType(std::string newType) {
	_type = newType;
}