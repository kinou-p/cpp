/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:30:20 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 13:18:03 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;
	std::cout << "Zombie " << name << " created\n";
	return ;
}

Zombie::~Zombie(void) {	
	std::cout << "Zombie " << this->_name << " destroyed\n";
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name <<  ": BraiiiiiiinnnzzzZ...\n";
}
