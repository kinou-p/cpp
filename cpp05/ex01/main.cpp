/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:45 by apommier          #+#    #+#             */
/*   Updated: 2022/08/05 13:30:03 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << "================Bureaucrat exeption test=================\n\n";
	std::cout << "---Bureaucrat grade of 151 :\n";
	try
	{
		Bureaucrat john1(151, "john");
		std::cout << "Bureaucrat become bureaucrat!\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "\n---Bureaucrat grade of -1 :\n";
	try
	{
		Bureaucrat john2(-1, "john");
		std::cout << "Bureaucrat become bureaucrat!\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "\n---Bureaucrat grade of 50 :\n";
	try
	{
		Bureaucrat john3(50, "john");
		std::cout << "Bureaucrat become bureaucrat!\n";
		std::cout << john3 << std::endl;
		std::cout << "\n---Copy test :\n";
		Bureaucrat john4(john3);
		std::cout << john4 << std::endl;
		std::cout << "---Assignement test :\n";
		Bureaucrat john5;
		john5 = john4;
		std::cout << john5 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\n=======================Form test=======================\n\n";
	std::cout << "---Form execution grade of 151 :\n";
	try
	{
		Form form1(10, 151, "form_one");
		std::cout << "Form created!\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "\n---Form signed grade of -1 :\n";
	try
	{
		Form form2(-1, 10, "form_two");
		std::cout << "Form created!\n";
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	
	std::cout << "\n---Form signed grade of 50 :\n";
	try
	{
		Form form3(50, 10, "form_three");
		std::cout << "Form created!\n";
		std::cout << "trying to sign form by a 50 rank!\n";
		Bureaucrat john(50, "john");
		form3.beSigned(john);
		std::cout << form3;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	
	std::cout << "\n---Form signed grade of 50 :\n";
	try
	{
		Bureaucrat john(51, "john");
		std::cout << john;
		Form form3(50, 10, "form_three");
		std::cout << form3;
		std::cout << "---trying to sign form with john---\n";
		form3.beSigned(john);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}