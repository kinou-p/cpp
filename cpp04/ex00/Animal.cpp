/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:05:22 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 16:48:25 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "Basic Animal";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	this->type = copy.getType();
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Groar im an animal\n";	
}

Animal	&Animal::operator=(const Animal& rhs)
{
	std::cout << "Animal assignement operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}