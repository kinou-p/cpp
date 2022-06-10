/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 21:20:32 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 23:01:02 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class HumanA {

	public:
	
		HumanA(void);
		~HumanA(void);

	private:
	
		void attack(void) const;
		std::string	_name;
		std::string	*_Weapon;

};