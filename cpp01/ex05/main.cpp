/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:06:54 by apommier          #+#    #+#             */
/*   Updated: 2022/06/21 23:37:53 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	std::cout << "Debug level:\n";
	harl.complain("DEBUG");
	
	std::cout << "\nInfo level:\n";
	harl.complain("INFO");

	std::cout << "\nWarning level:\n";
	harl.complain("WARNING");

	std::cout << "\nError level:\n";
	harl.complain("ERROR");

	std::cout << "\nA lot of complaints\n";
	for (int i = 0; i < 20; i++)
		harl.complain(levelTab[std::rand() % 4]);
	
	return (0);
}