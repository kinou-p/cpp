/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 23:39:11 by apommier          #+#    #+#             */
/*   Updated: 2022/06/21 23:44:12 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <cstdlib>
#include <string>

class Harl {

	public:
	
		Harl();
		~Harl();

		void complain(std::string level);

	private:
	
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

};

#endif