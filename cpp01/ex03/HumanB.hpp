/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:23:58 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 23:01:08 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class HumanB {

	public:
	
		HumanB(void);
		~HumanB(void);

	private:
			
		std::string	_name;
		std::string	&_Weapon;

};