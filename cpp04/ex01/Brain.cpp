/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 04:37:19 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 18:37:29 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain assignement operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->_ideas);
}

void Brain::setIdeas(int i, std::string str)
{
	this->_ideas[i] = str;
}
