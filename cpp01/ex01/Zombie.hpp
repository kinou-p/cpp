/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:30:22 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 13:52:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

class Zombie {

	public:
	
		Zombie(void);
		~Zombie(void);
		void	announce( void );
		void	setName(std::string name);

	private:
	
		std::string	_name;

};

void randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);