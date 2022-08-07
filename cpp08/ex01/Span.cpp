/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:32:51 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 22:04:55 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Span::Span()
{
	this->_storageSize = 0;
}

Span::Span(unsigned int size)
{
	this->_storageSize = size;
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span::~Span()
{
	
}

void Span::addNumber()
{
	
}

int Span::shortestSpan()
{
	
}

int Span::longestSpan()
{
	
}

void	Span::addRangeOfIterators()
{
	
}

Span	&Span::operator=( const Span &rhs )
{
	this->_storageSize = rhs._storageSize;
	this->_storage = rhs._storage;
	return (*this);
}