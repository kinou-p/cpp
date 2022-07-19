/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:53:59 by apommier          #+#    #+#             */
/*   Updated: 2022/07/17 11:27:27 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		virtual ~WrongAnimal();
		WrongAnimal	&operator=(const WrongAnimal& rhs);

		void makeSound(void) const;
		std::string getType(void) const;

	protected:

		std::string type;
};

#endif