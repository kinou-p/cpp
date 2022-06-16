/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:23:58 by apommier          #+#    #+#             */
/*   Updated: 2022/06/16 23:32:27 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

	public:
	
		HumanB(const std::string name, Weapon Weapon);
		HumanB (const std::string name);
		~HumanB(void);
		void attack(void) const;
		void setWeapon(Weapon Weapon);

	private:
		
		std::string	_name;
		std::string	&_Weapon;

};

#endif