/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:40:41 by apommier          #+#    #+#             */
/*   Updated: 2022/06/21 23:52:51 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	bool freeHarl = 0;
	std::string	levelTab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (ac != 2)
		return (0);
	for (int j = 0; j < 4; j++)
	{
		if (av[1] == levelTab[j])
			freeHarl = 1;
		if (freeHarl == 1)
		{
			while (j < 4)
			{
				harl.complain(levelTab[j]);
				j++;
			}
		}
	}
}