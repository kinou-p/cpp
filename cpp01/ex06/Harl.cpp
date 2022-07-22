/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:39:20 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 11:22:21 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
	
}

void Harl::complain(std::string level)
{
	void		(Harl::*complaint[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4 ; i++)
	{
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == levelTab[i])
			(this->*selectedComplaint)();
	}
}

int Harl::chooseComplain(std::string level)
{
	//void		(Harl::*complaint[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4 ; i++)
	{
		//void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == levelTab[i])
			return (i);
	}
	return (4);
}


void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n\n";
}

void Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!\n\n";
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n\n";
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}