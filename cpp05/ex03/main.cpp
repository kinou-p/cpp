/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:45 by apommier          #+#    #+#             */
/*   Updated: 2022/08/05 14:46:57 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "===============================Presidential pardon=============================\n\n";
	std::cout << "Trying to execute without sign :\n";
	try
	{
		Bureaucrat john(150, "john");
		PresidentialPardonForm form("Assassin");
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\nTrying to execute without the right grade :\n";
	try
	{
		Bureaucrat john(25, "john");
		PresidentialPardonForm form("Assassin");
		form.beSigned(john);
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\nAll good :\n";
	try
	{
		Bureaucrat john(5, "john");
		PresidentialPardonForm form("Assassin");
		form.beSigned(john);
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===============================Robotomy request=============================\n\n";
	std::cout << "Trying to execute without sign :\n";
	try
	{
		Bureaucrat john(150, "john");
		RobotomyRequestForm form("Assassin");
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\nTrying to execute without the right grade :\n";
	try
	{
		Bureaucrat john(46, "john");
		RobotomyRequestForm form("Assassin");
		form.beSigned(john);
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\nAll good :\n";
	try
	{
		Bureaucrat john(5, "john");
		RobotomyRequestForm form("Assassin");
		form.beSigned(john);
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\n===============================Shrubbery Creation=============================\n\n";
	std::cout << "Trying to execute without sign :\n";
	try
	{
		Bureaucrat john(150, "john");
		ShrubberyCreationForm form("Assassin");
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\nTrying to execute without the right grade :\n";
	try
	{
		Bureaucrat john(137, "john");
		ShrubberyCreationForm form("Assassin");
		form.beSigned(john);
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}

	std::cout << "\nAll good :\n";
	try
	{
		Bureaucrat john(5, "john");
		ShrubberyCreationForm form("Assassin");
		form.beSigned(john);
		john.executeForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what();
	}
}