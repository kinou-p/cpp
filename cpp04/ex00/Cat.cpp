/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:37 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:24:25 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = copy.getType();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow\n";
}

Cat	&Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat assignement operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}
