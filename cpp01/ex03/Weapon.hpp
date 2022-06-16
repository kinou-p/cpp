/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:43:13 by apommier          #+#    #+#             */
/*   Updated: 2022/06/16 23:39:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {

	public:
	
		Weapon(std::string str);
		~Weapon(void);
		std::string&  getType(void);
		void setType(const std::string type);

	private:
	
		std::string	_type;

};

#endif