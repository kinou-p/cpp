/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 10:37:24 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 12:57:45 by apommier         ###   ########.fr       */
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
		int				_nbrContactSet;
		Contact			_Contact[8];
};

#endif