/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:43:13 by apommier          #+#    #+#             */
/*   Updated: 2022/06/19 15:55:10 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>


class Weapon {

	public:
	
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType( void ) const;
		//void setType(const std::string type);
		void				setType(std::string newType);

	private:
	
		std::string	_type;

};

#endif