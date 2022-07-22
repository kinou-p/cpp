/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:39:20 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 09:40:02 by apommier         ###   ########.fr       */
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

int Harl::ChooseComplain(std::string level)
{
	void		(Harl::*complaint[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4 ; i++)
	{
		void (Harl::*selectedComplaint)( void ) = complaint[i];
		if (level == levelTab[i])
			return (i);
	}
}


void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}