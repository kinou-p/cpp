/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:55:40 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 12:46:19 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

void	PrintMessage(int index)
{
	if (index == 0)
		std::cout << "Enter your fisrt name: ";
	if (index == 1)
		std::cout << "Enter your last name: ";
	if (index == 2)
		std::cout << "Enter your nickname: ";
	if (index == 3)
		std::cout << "Enter your phone number: ";
	if (index == 4)
		std::cout << "Enter your darkest secret: ";
}

void	add_contact(PhoneBook *Book )
{
	int			index = 0;
	std::string	line;
	std::string	info[5];
	Contact Contact;

	while (index < 5)
	{
		PrintMessage(index);
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << "\nError: end of file\n";
			exit(0);
		}
		info[index] = line;
		if (index == 3 && line.find_first_not_of("0123456789") != std::string::npos)
			index = 3;
		else if (!line.empty() && line.find_last_not_of(" ") != std::string::npos )
			index++;
	}
	Contact.FillContact(info);
	Book->StoreContact(&Contact);
}

int	main(int ac, char **av)
{
	PhoneBook		book;
	Contact			contact;
	std::string		line;
	
	(void)av;
	if (ac != 1)
	{
		std::cout << "Too much arguments\n";
		return (0);
	}
	while (line != "EXIT")
	{
		std::cout << "Enter a command : ADD | SEARCH | EXIT" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::cout << "Error: end of file\n";
			exit(0);
		}
		if (line == "ADD")
			add_contact(&book);
		else if (line == "SEARCH")
			book.PrintIndex();
		else if (line != "EXIT" && !line.empty())
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}