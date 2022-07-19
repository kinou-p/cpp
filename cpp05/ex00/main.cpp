/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:45 by apommier          #+#    #+#             */
/*   Updated: 2022/07/19 11:32:05 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat First(151, "john");
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
		return (-1);
	}
	return (0);
}