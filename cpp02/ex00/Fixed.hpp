/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 00:58:18 by apommier          #+#    #+#             */
/*   Updated: 2022/07/30 16:09:26 by apommier         ###   ########.fr       */
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
		Fixed	&operator=(const Fixed& op);

	private:

		int _value;
		const static int _fraction = 8; 
};

//std::ostream &operator<<(std::ostream &out, const Fixed &nbr);

#endif