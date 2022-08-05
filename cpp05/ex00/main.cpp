/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:45 by apommier          #+#    #+#             */
/*   Updated: 2022/08/05 13:24:05 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "================Bureaucrat exeption and assignation test=================\n\n";
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


	std::cout << "\n================Bureaucrat member function test=================\n\n";
	try
	{
		Bureaucrat john2(50, "john");
		std::cout << "Bureaucrat become bureaucrat!\n";\
		std::cout << john2 << std::endl;
		john2.upGrade();
		std::cout << john2 << std::endl;
		john2.upGrade();
		std::cout << john2 << std::endl;
		john2.downGrade();
		std::cout << john2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "---same but with exeption\n";
	try
	{
		Bureaucrat john2(1, "john");
		std::cout << "Bureaucrat become bureaucrat!\n";
		std::cout << john2 << std::endl;
		john2.upGrade();
		std::cout << john2 << std::endl;
		john2.downGrade();
		std::cout << john2 << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
	
	return (0);
}