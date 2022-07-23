/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:09 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 13:29:02 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	float test = a.getRawBits();

	std::cout << test << std::endl;
	std::cout << "--1--" << std::endl;
	std::cout << ++test << std::endl;
	std::cout << "--2--" << std::endl;
	std::cout << test << std::endl;
	std::cout << "--3--" << std::endl;
	std::cout << test++ << std::endl;
	std::cout << "--4--" << std::endl;
	std::cout << test << std::endl;
	std::cout << "--5--" << std::endl;

	std::cout << "--0--" << std::endl;
	std::cout << a << std::endl;
	std::cout << "--1--" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "--2--" << std::endl;
	std::cout << a << std::endl;
	std::cout << "--3--" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "--4--" << std::endl;
	std::cout << a << std::endl;
	std::cout << "--5--" << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return (0);
}