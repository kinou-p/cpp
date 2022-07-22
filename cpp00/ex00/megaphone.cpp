/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 01:47:56 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 12:00:25 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int i = 0;
	int j = 0;

	if (ac != 1)
	{
		while (av[++i])
		{
			j = -1;
			while (av[i][++j])
				av[i][j] = toupper(av[i][j]);	
		}
		i = 0;
		while (av[++i])
			std::cout << av[i];
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}