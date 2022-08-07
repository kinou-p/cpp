/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:33:52 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 23:23:13 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>

class Span{
	public :
	
		Span();
		Span(unsigned int size);
		Span(const Span &copy);
		~Span();
		void	addNumber(int);
		int		shortestSpan();
		int		longestSpan();
		void	addRangeOfIterators(int *nb, int size);

		Span	&operator=( const Span &rhs );
		
		class fullContainer : public std::exception {
			char const *what() const throw() 
			{
				return ("Container can't accept those number because he doesn't have enough memory !");
			}
		};

		class notEnoughNumber : public std::exception {
			char const *what() const throw() 
			{
				return ("You need at least 2 number to find a span!");
			}
		};
		
	private :

		std::vector<int>	_storage;
		int _storageSize;
};