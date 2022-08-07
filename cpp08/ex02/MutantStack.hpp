/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 23:20:42 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 23:51:47 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <stack>
#include <list>

template<typename T>
class MutantStack : public std::stack<T>{
	public :
	
		MutantStack<T>(){}	
		MutantStack<T>( const MutantStack<T> &src )
		{
			*this = src;
		}
		~MutantStack<T>(){}

		MutantStack<T>	&operator=(const MutantStack<T> &rhs)
		{
			(void)rhs;
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator; //simplify name

		iterator	begin()
		{
			return this->c.begin(); //std::cbegin | std::begin
		}
		iterator	end()
		{
			return this->c.end();
		}

	private :
		
};