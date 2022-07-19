/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:05:20 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:27:22 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	
	public:
	
		Animal();
		Animal(const Animal& copy);
		virtual ~Animal();
		Animal	&operator=(const Animal& rhs);
		
		virtual void makeSound(void) const;
		std::string getType(void) const;

	protected:

		std::string type;
};

#endif