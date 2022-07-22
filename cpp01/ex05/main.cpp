/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 22:06:54 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 09:26:27 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	std::cout << "[ DEBUG ]\n";
	harl.complain("DEBUG");
	
	std::cout << "\n[ INFO ]\n";
	harl.complain("INFO");

	std::cout << "\n[ WARNING ]\n";
	harl.complain("WARNING");

	std::cout << "\n[ ERROR ]\n";
	harl.complain("ERROR");

	std::cout << "\n[ LotOfComplaints ]\n";
	for (int i = 0; i < 20; i++)
		harl.complain(levelTab[std::rand() % 4]);
	
	return (0);
}