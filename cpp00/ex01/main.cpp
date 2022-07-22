/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:55:40 by apommier          #+#    #+#             */
/*   Updated: 2022/07/21 20:01:53 by apommier         ###   ########.fr       */
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
	Contact *Contact = new class Contact;
	
	while (index < 5)
	{
		PrintMessage(index);
		std::getline(std::cin, line);
		info[index] = line;
		if (index == 3 && line.find_first_not_of("0123456789") != std::string::npos)
			index = 3;
		else if (!line.empty() && line.find_last_not_of(" ") != std::string::npos )
			index++;
	}
	Contact->FillContact(info);
	Book->StoreContact(Contact);
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
	std::cout << "Enter a command : ADD | SEARCH | EXIT" << std::endl;
	while (line != "EXIT")
	{
		std::getline(std::cin, line);
		if (line != "SEARCH")
			std::cout << "Enter a command : ADD | SEARCH | EXIT1" << std::endl;
		if (line == "ADD")
			add_contact(&book);
		else if (line == "SEARCH")
			book.PrintIndex();
		else if (line != "EXIT" && !line.empty())
			std::cout << "Invalid command" << std::endl;
		if (line != "SEARCH" && line.size())
			std::cout << "Enter a command : ADD | SEARCH | EXIT2" << std::endl;
	}
	book.deleteContact();
	return (0);
}