/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:20 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 12:41:59 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_NbrContact = 0;
	this->_nbrContactSet = 0;
}

PhoneBook::~PhoneBook(void)
{	
}

void PhoneBook::StoreContact(Contact *NewContact)
{
	if (this->_NbrContact >= 8)
		this->_NbrContact = 0;
	_Contact[this->_NbrContact] = *NewContact;
	this->_NbrContact++;
	this->_nbrContactSet++;
	
}

void PhoneBook::PrintContact(int index)
{
	if (index >= 8 || index >= this->_nbrContactSet)
	{
		std::cout << "There is no contact at this index" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "First name: " << this->_Contact[index].getOneInfo(0) << std::endl;
	std::cout << std::setw(10) << "Last name: " << this->_Contact[index].getOneInfo(1) << std::endl;
	std::cout << std::setw(10) << "Nickname: " << this->_Contact[index].getOneInfo(2) << std::endl;
	std::cout << std::setw(10) << "Phone number: " << this->_Contact[index].getOneInfo(3) << std::endl;
	std::cout << std::setw(10) << "Darkest secret: " << this->_Contact[index].getOneInfo(4) << std::endl;
}

void PhoneBook::PrintIndex()
{
	int	index = 0;
	std::string	nbr;
	
	
	while (index < 8 && this->_nbrContactSet > index)
	{
		std::cout << std::setw(10) << index + 1 << "|";
		std::cout << std::setw(10) << this->_Contact[index].GetInfo(0) << "|";
		std::cout << std::setw(10) << this->_Contact[index].GetInfo(1) << "|";
		std::cout << std::setw(10) << this->_Contact[index].GetInfo(2) << std::endl; 
		index++;
	}
	if (!index)
		std::cout << "There is no contact\n";
	if (index)
	{
		while (1)
		{
			std::cout << "Enter index of contact: ";
			std::getline(std::cin, nbr);
			if (std::cin.eof())
			{
				std::cout << "Error: end of file\n";
				exit(0);
			}
			if (nbr.size() != 1 || !isdigit(nbr[0]))
				std::cout << "Bad entry" << std::endl;
			else
			{
				index = nbr[0] - '0';
				if (!index || index > 8)
					std::cout << "Bad entry" << std::endl;
				else
				{
					this->PrintContact(index - 1);
					return ;
				}
			}
		}
	}
}
