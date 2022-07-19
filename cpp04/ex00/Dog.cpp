/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:41 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:14:01 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = copy.getType();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf\n";
}

Dog	&Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog assignement operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}