/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:21:01 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 15:50:31 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cstdlib>

template<typename T>
void	display( T &var )
{
	std::cout << "value is: " << var << std::endl;
}

int	main( void )
{
	std::string	stringTab[3] = {"First", "Second", "Third"};
	char		charTab[7] = "Hello!";
	int			intTab[3] = {10, 50, 150};

	std::cout << "==================Int tab==================\n";
	iter(intTab, 3, display);
	std::cout << "\n==================Char tab==================\n";
	iter(charTab, 6, display);
	std::cout << "\n==================String tab==================\n";
	iter(stringTab, 3, display);
}