/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:20 by apommier          #+#    #+#             */
/*   Updated: 2022/04/21 18:32:32 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	int index = 0;
	
	this->_NbrContact = 0;
	while (index < 8)
		_Contact[index++] = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;	
}

void PhoneBook::StoreContact(Contact *NewContact)
{
	_Contact[this->_NbrContact] = NewContact;
	if (this->_NbrContact == 8)
		this->_NbrContact = 0;
	else
		this->_NbrContact++;
}

void PhoneBook::PrintContact(int index)
{
	if (!this->_Contact[index])
	{
		std::cout << "There is no contact at this index" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "First name: " << this->_Contact[index]->GetRealInfo(0) << std::endl;
	std::cout << std::setw(10) << "Last name: " << this->_Contact[index]->GetRealInfo(1) << std::endl;
	std::cout << std::setw(10) << "Nickname: " << this->_Contact[index]->GetRealInfo(2) << std::endl;
	std::cout << std::setw(10) << "Phone number: " << this->_Contact[index]->GetRealInfo(3) << std::endl;
	std::cout << std::setw(10) << "Darkest secret: " << this->_Contact[index]->GetRealInfo(4) << std::endl;
}

void PhoneBook::PrintIndex()
{
	int	index = 0;
	std::string	nbr;
	
	
	while (index < 8 && this->_Contact[index])
	{
		std::cout << std::setw(10) << index + 1 << "|";
		std::cout << std::setw(10) << this->_Contact[index]->GetInfo(0) << "|";
		std::cout << std::setw(10) << this->_Contact[index]->GetInfo(1) << "|";
		std::cout << std::setw(10) << this->_Contact[index]->GetInfo(2) << std::endl; 
		index++;
	}
	if (!index)
		std::cout << "There is no contact\n";
	else
	{
		while (1)
		{
			std::cout << "Enter index of contact: ";
			std::cin >> nbr;
			if (nbr.size() != 1 || !isdigit(nbr[0]))
				std::cout << "Bad entry" << std::endl;
			else
			{
				index = nbr[0] - 48;
				if (!index || index > 8)
					std::cout << "Bad entry" << std::endl;
				else
				{
					this->PrintContact(index - 1);
					break;
				}
			}
		}
	}
}

