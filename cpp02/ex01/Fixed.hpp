/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:05 by apommier          #+#    #+#             */
/*   Updated: 2022/07/11 23:52:34 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <tgmath.h>

class Fixed {
	public:
		
		
		Fixed();
		Fixed(const float nbr);
		Fixed(const int nbr);
		Fixed(const Fixed& copy);
		~Fixed();

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		Fixed	&operator=(const Fixed& op);
	
	private:

		int 				_value;
		const static int	_fraction = 8; 
};

std::ostream &operator<<(std::ostream &out, const Fixed &nbr);


#endif