/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 08:03:53 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 14:05:33 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	
	public:

		
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& copy);
		virtual ~ScavTrap();
		
		ScavTrap	&operator=(const ScavTrap& rhs);
		
		void attack(const std::string& target);
		void guardGate();

	protected:

		ScavTrap();
};

#endif