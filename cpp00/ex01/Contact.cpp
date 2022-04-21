/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:12 by apommier          #+#    #+#             */
/*   Updated: 2022/04/21 18:32:43 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {	
	return ;
}

void Contact::FillContact(std::string *info) {
	this->_first_name = info[0];
	this->_last_name = info[1];
	this->_nickname = info[2];
	this->_phone_number = info[3];
	this->_darkest_secret = info[4];
}

std::string	Contact::GetInfo(int index)
{
	std::string str;
	 
	str = this->GetRealInfo(index);
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

std::string	Contact::GetRealInfo(int index)
{
	if (index == 0)
		return (this->_first_name);
	if (index == 1)
		return (this->_last_name);
	if (index == 2)
		return (this->_nickname);
	if (index == 3)
		return (this->_phone_number);
	if (index == 4)
		return (this->_darkest_secret);
	return (0);
}