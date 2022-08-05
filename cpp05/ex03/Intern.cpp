/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 12:02:52 by apommier          #+#    #+#             */
/*   Updated: 2022/08/05 12:02:54 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"



Intern::Intern()
{

}

Intern::Intern(const Intern& copy)
{
	*this = copy;
}

Intern::~Intern()
{

}

Intern	&Intern::operator=(const Intern& rhs)
{
	(void)rhs;
	return (*this);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;

	while (i < 3 && formNames[i] != formName)
		i++;
	AForm* ret = NULL;
	switch (i)
	{
		case 0:
			ret = new ShrubberyCreationForm(target);
			break;
		case 1:
			ret = new RobotomyRequestForm(target);
			break;
		case 2:
			ret = new PresidentialPardonForm(target);
			break;
		default:
			break;
	}
	if (ret)
		std::cout << "Intern creates " << formName << std::endl;
	else
		std::cout << "Intern say that " << formName << " form doesn't exist\n";
	return (ret);
}
