/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:41 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 19:11:57 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_Brain = new Brain();
}

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_Brain = new Brain();
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_Brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf\n";
}

Dog	&Dog::operator=(const Dog& rhs)
{
	std::cout << "Dog assignement operator called" << std::endl;
	if (&rhs != this)
	{
		this->type = rhs.getType();
		delete this->_Brain;
		this->_Brain = new Brain(*rhs.getBrain());
	}
	return (*this);
}

Animal	&Dog::operator=( const Animal &rhs)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (&rhs != this)
	{
		this->type = rhs.getType();
		delete this->_Brain;
		this->_Brain = new Brain(*rhs.getBrain());
	}
	return (*this);
}

Brain *Dog::getBrain() const
{
	return (this->_Brain);
}