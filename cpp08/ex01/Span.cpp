/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:32:51 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 23:09:03 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

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

void Span::addNumber(int nbr)
{
	if ((int)this->_storage.size() >= this->_storageSize)
		throw Span::fullContainer();
	this->_storage.push_back(nbr);
}

int Span::shortestSpan()
{
	std::vector<int>	tmp = this->_storage;

	if (this->_storage.size() < 2)
		throw Span::notEnoughNumber();
	std::sort(tmp.begin(), tmp.end());
	int ret = tmp[1] - tmp[0];
	
	for (int i = 1; i < (int)tmp.size() - 1; i++)
	{
		//std::cout << "ret= " << ret << " | value = " << tmp[i + 1] - tmp[i] << " | tmp[i]= " << tmp[i+1] << " " << tmp[i]<< std::endl;
		if (tmp[i + 1] - tmp[i] < ret)
			ret = tmp[i + 1] - tmp[i];
	}
	return (ret);
}

int Span::longestSpan()
{
	if (this->_storage.size() < 2)
		throw Span::notEnoughNumber();
	return (*max_element(this->_storage.begin(), this->_storage.end()) - *min_element(this->_storage.begin(), this->_storage.end()));
}

void	Span::addRangeOfIterators(int *nb, int size)
{
	if ((int)this->_storage.size() > this->_storageSize - size)
		throw Span::fullContainer();
	this->_storage.insert(this->_storage.end(), nb, nb + size);
}

Span	&Span::operator=( const Span &rhs )
{
	this->_storageSize = rhs._storageSize;
	this->_storage = rhs._storage;
	return (*this);
}