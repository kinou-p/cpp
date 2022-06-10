/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 19:43:13 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 21:13:47 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Weapon {

	public:
	
		Weapon(void);
		~Weapon(void);
		std::string const getType(void);
		void setType(void);

	private:
	
		std::string	_type;

};