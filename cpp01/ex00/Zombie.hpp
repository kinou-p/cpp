/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:30:22 by apommier          #+#    #+#             */
/*   Updated: 2022/07/22 12:57:34 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

class Zombie {

	public:
	
		Zombie(std::string name);
		~Zombie(void);
		void announce( void ); 

	private:
	
		std::string	_name;

};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
