/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:54:02 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 14:13:27 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :

		WrongCat();
		WrongCat(const WrongCat& copy);
		virtual ~WrongCat();
		WrongCat	&operator=(const WrongCat& rhs);
		
		void makeSound(void) const;
	
	private :
};

#endif