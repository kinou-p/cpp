/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:53:56 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:16:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	this->type = copy.getType();
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Gruuu im an WrongAnimal\n";	
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal& rhs)
{
	std::cout << "WrongAnimal assignement operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}