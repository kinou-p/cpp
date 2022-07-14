/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 15:31:05 by apommier          #+#    #+#             */
/*   Updated: 2022/07/13 05:34:25 by apommier         ###   ########.fr       */
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
		Fixed	&operator=(const Fixed& arg);
		
		bool	operator>(const Fixed& arg) const;
		bool	operator<(const Fixed& arg) const;
		bool	operator>=(const Fixed& arg) const;
		bool	operator<=(const Fixed& arg) const;
		bool	operator==(const Fixed& arg) const;
		bool	operator!=(const Fixed& arg) const;
		Fixed	operator+(const Fixed& arg) const;
		Fixed	operator-(const Fixed& arg) const;
		Fixed	operator*(const Fixed& arg) const;
		Fixed	operator/(const Fixed& arg) const;
		Fixed	operator++(int);
		Fixed	operator--(int);
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		

		static Fixed	&min(Fixed& arg, Fixed& argTwo);
		static const Fixed	&min(const Fixed& arg, const Fixed& argTwo);
		static Fixed	&max(Fixed& arg, Fixed& argTwo);
		static const Fixed	&max(const Fixed& arg, const Fixed& argTwo);
	
	private:

		int 				_value;
		const static int	_fraction = 8; 
};

std::ostream &operator<<(std::ostream &out, const Fixed &nbr);


#endif