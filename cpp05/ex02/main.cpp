/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:45 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 19:38:41 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat First(151, "john");
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	Bureaucrat First(1, "john");
	ShrubberyCreationForm test("niceTree");
	try
	{
		test.execute(First);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	
	return (0);
}