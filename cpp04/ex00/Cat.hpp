/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:11:39 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:47:44 by apommier         ###   ########.fr       */
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
		
		void makeSound(void) const;

};

#endif