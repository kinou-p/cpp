/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:24:34 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 17:24:51 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	
	public:

		
		FragTrap(std::string name);
		FragTrap(const FragTrap& copy);
		~FragTrap();
		
		FragTrap	&operator=(const FragTrap& rhs);
		
		void attack(const std::string& target);
		void highFivesGuys(void);

	protected:

		FragTrap();
};





#endif