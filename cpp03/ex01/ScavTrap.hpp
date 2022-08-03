/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 08:03:53 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 14:23:58 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	
	public:

		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		~ScavTrap();
		
		ScavTrap	&operator=(const ScavTrap& rhs);
		
		void attack(const std::string& target);
		void guardGate();

	private:
		
};

#endif