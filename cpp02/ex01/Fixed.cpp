/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:03 by apommier          #+#    #+#             */
/*   Updated: 2022/07/30 16:36:28 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this->_value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called\n" << nbr << std::endl;
	this->_value = roundf(nbr * (1 << this->_fraction));
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called\n";
	this->_value = nbr;
}

Fixed & Fixed::operator=(const Fixed& op)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &op)
        this->_value = op.getRawBits();
    return (*this);
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->_value = copy.getRawBits();
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_fraction));
}

int		Fixed::toInt(void) const
{
	return (((int)(this->_value >> this->_fraction)));
}

std::ostream &operator<<(std::ostream &out, const Fixed &nbr)
{
	out << nbr.toFloat();
	return (out);
}