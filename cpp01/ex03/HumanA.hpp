/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:20:32 by apommier          #+#    #+#             */
/*   Updated: 2022/06/19 12:22:11 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"


class HumanA {

	public:
	
		HumanA(const std::string name, Weapon &Weapon);
		~HumanA(void);
		void attack(void);

	private:
	
		std::string	_name;
		Weapon	&_Weapon;

};

#endif