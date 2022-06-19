/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:23:58 by apommier          #+#    #+#             */
/*   Updated: 2022/06/19 16:07:36 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
	
		HumanB(std::string name);
		HumanB(const std::string name, Weapon Weapon);
		~HumanB(void);
		void attack(void) const;
		void setWeapon(Weapon &newWeapon);

	private:
		
		std::string	_name;
		Weapon	*_Weapon;

};

#endif