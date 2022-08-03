/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:37 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 13:20:30 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->_Brain = new Brain;
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_Brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}

Cat	&Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignement operator called" << std::endl;
	if (&rhs != this)
	{
		this->type = rhs.getType();
		delete this->_Brain;
		this->_Brain = new Brain(*rhs._Brain);
	}
	return (*this);
}

Animal	&Cat::operator=( const Animal &rhs)
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

Brain *Cat::getBrain() const
{
	return (this->_Brain);
}
