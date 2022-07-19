/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:39 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 18:39:59 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(const Cat& copy);
		~Cat();
		Cat	&operator=(const Cat& rhs);
		Animal	&operator=( const Animal &rhs);
		
		void makeSound(void) const;
		Brain *getBrain() const;
	
	private :
		Brain *_Brain;
};

#endif