/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:42 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 14:14:24 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
	public:

		Dog();
		Dog(const Dog& copy);
		virtual ~Dog();
		Dog	&operator=(const Dog& rhs);
		Animal	&operator=( const Animal &rhs);
		
		void makeSound(void) const;
		Brain *getBrain() const;
	
	private:

		Brain *_Brain;
};

#endif