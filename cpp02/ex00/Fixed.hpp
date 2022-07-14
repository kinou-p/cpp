/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:58:18 by apommier          #+#    #+#             */
/*   Updated: 2022/06/22 15:25:06 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		
		
		Fixed();
		Fixed(const Fixed&);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
	
	private:

		int _value;
		const static int _fraction = 8; 
};

#endif