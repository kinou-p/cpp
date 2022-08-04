/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:32:51 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 14:05:25 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:

		
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& copy);
		virtual ~DiamondTrap();
		
		DiamondTrap	&operator=(const DiamondTrap& rhs);
		
		void attack(const std::string& target);
		void whoAmI();

	private:

		DiamondTrap();
		std::string _name;
		
};

#endif