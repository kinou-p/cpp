/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:03 by apommier          #+#    #+#             */
/*   Updated: 2022/07/13 03:36:07 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//construtor and destructor

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
	std::cout << "Float constructor called\n";
	this->_value = (int)(roundf(nbr * (1 << this->_fraction)));
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called\n";
	this->_value = nbr;this->_value = nbr << this->_fraction;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called\n";
	this->_value = copy.getRawBits();
}

//accesssor

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

//convertion

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fraction));
}

int		Fixed::toInt(void) const
{
	return (((int)(this->_value >> this->_fraction)));
}

//operator overload----

std::ostream &operator<<(std::ostream &out, const Fixed &nbr)
{
	out << nbr.toFloat();
	return (out);
}

Fixed &Fixed::operator=(const Fixed& arg)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &arg)
        this->_value = arg.getRawBits();
    return (*this);
}

//operator overload (comparison)

bool	Fixed::operator>(const Fixed& arg) const
{
	return (this->_value > arg.getRawBits());
}

bool	Fixed::operator<(const Fixed& arg) const
{
	return (this->_value < arg.getRawBits());
}

bool	Fixed::operator>=(const Fixed& arg) const
{
	return (this->_value >= arg.getRawBits());
}

bool	Fixed::operator<=(const Fixed& arg) const
{
	return (this->_value <= arg.getRawBits());
}

bool	Fixed::operator==(const Fixed& arg) const
{
	return (this->_value == arg.getRawBits());
}

bool	Fixed::operator!=(const Fixed& arg) const
{
	return (this->_value == arg.getRawBits());
}

//operator overload (soustraction addition)

Fixed	Fixed::operator+(const Fixed& arg) const
{
	Fixed ret(*this);
	ret.setRawBits(this->_value + arg.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(const Fixed& arg) const
{
	Fixed ret(*this);
	ret.setRawBits(this->_value - arg.getRawBits());
	return (ret);
}

//operator overload (division multiplication)

Fixed	Fixed::operator*(const Fixed& arg) const
{
	Fixed ret(*this);
	ret.setRawBits((this->_value * arg.getRawBits()) / (1 << this->_fraction));
	return (ret);
}

Fixed	Fixed::operator/(const Fixed& arg)  const
{
	Fixed ret(*this);
	ret.setRawBits((this->_value * (1 << this->_fraction)) / arg.getRawBits());
	return (ret);
}

//operator overload (incremention and decrementation)

Fixed	&Fixed::operator++(void)
{
	this->_value++;
    return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed ret(*this);
    ret.operator++();
    return (ret);
}

Fixed	&Fixed::operator--(void)
{
	this->_value++;
    return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed ret(*this);
    ret.operator--();
    return (ret);
}

//min and max betwenn two Fixed class

Fixed	&Fixed::min(Fixed& arg, Fixed& argTwo)
{
	if (arg < argTwo)
		return (arg);
	return (argTwo);
}

const Fixed	&Fixed::min(const Fixed& arg, const Fixed& argTwo)
{
	if (arg< argTwo)
		return (arg);
	return (argTwo);
}

Fixed	&Fixed::max(Fixed& arg, Fixed& argTwo)
{
	if (arg > argTwo)
		return (arg);
	return (argTwo);
}

const Fixed &Fixed::max(const Fixed& arg, const Fixed& argTwo)
{
	if (arg > argTwo)
		return (arg);
	return (argTwo);
}