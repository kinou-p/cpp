/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:55:40 by apommier          #+#    #+#             */
/*   Updated: 2022/04/21 18:58:19 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void PrintMessage(int index)
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

void	search_contact(PhoneBook *Book, Contact *Contact)
{
	
}

void	add_contact(PhoneBook *Book, Contact *Contact)
{
	int			index = 0;
	std::string	line;
	std::string	info[5];

	while (index < 5)
	{
		PrintMessage(index);
		std::getline(std::cin, line);
		info[index] = line;
		if (!line.empty())
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
	int				NbrContact = 0;
	
	if (ac != 1)
	{
		std::cout << "too much arguments\n";
		return (0);
	}
	//line = "nothing";
	std::cout << "Enter a command : ADD | SEARCH | EXIT" << std::endl;
	while (line != "EXIT")
	{
		std::getline(std::cin, line);
		if (line == "ADD")
			add_contact(&book, &contact);
		else if (line == "SEARCH")
			book.PrintIndex();
		else
			std::cout << "Invalid command" << std::endl;
	}
	//std::cout << "exit\n";
	return (0);
}