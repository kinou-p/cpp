/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:54:01 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:14:14 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->type = copy.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow\n";
}

WrongCat	&WrongCat::operator=(const WrongCat& rhs)
{
	std::cout << "WrongCat assignement operator called" << std::endl;
	this->type = rhs.getType();
	return (*this);
}
