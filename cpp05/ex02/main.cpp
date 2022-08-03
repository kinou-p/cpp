/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:45 by apommier          #+#    #+#             */
/*   Updated: 2022/08/02 18:04:36 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
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