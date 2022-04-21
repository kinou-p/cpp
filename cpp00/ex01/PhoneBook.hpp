/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:24 by apommier          #+#    #+#             */
/*   Updated: 2022/04/21 17:57:29 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook {
	
	public:
	
		PhoneBook(void);
		~PhoneBook(void);
		void StoreContact(Contact *NewContact);
		void PrintContact(int index);
		void PrintIndex();
	private:
	
		int				_NbrContact;
		class Contact	*_Contact[8];
};

#endif