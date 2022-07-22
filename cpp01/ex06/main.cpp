/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:40:41 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 09:44:33 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void harFilter(Harl harl, std::string level)
{
	int goodLevel = harl.chooseComplain(level) + 1;
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	switch (goodLevel)
	{
		case 1 :
			harl.complain("DEBUG");
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");
		case 2 :
			harl.complain("INFO");
			harl.complain("WARNING");
			harl.complain("ERROR");	
		case 3 :
			harl.complain("WARNING");
			harl.complain("ERROR");
		case 4 :
			harl.complain("ERROR");
		default	:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}	
}

int main(int ac, char **av)
{
	Harl harl;
	
	std::cout << ac << std::endl;
	if (ac != 2)
	{
		std::cerr << "Bad entry\n";
		return (1);
	}
	harFilter(harl, av[1]);
	return (0);
}