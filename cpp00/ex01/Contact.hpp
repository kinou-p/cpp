/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:15 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 12:57:52 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <cstring>
# include <cctype>
# include <cstdlib>
# include <string>
# include <iostream>
# include <iomanip>

class Contact {

	public:
	
		Contact(void);
		~Contact(void);
		void FillContact(std::string *info);
		std::string	GetInfo(int index);
		std::string	getOneInfo(int index);

	private:
	
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif