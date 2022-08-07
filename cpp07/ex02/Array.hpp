/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:21:58 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 16:48:34 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template<typename T>
class Array{
	public :
	
		Array<T>()
		{
			this->_array = new T[0]();
			this->_size = 0;
		}
		
		Array<T>(const unsigned int n)
		{
			this->_size = n;
			this->_array = new T[n];
		}
		
		Array<T>(Array<T> const & toCopy)
		{
			this->_array = new T[toCopy._size];
			this->_size = toCopy._size;
			for (unsigned int i = 0; i < toCopy._size; i++)
				_array[i] = toCopy._array[i];
		}
		
		~Array<T>()
		{
			delete[] _array;
		}
		
		Array<T>	&operator=(const Array<T> &rhs)
		{
			if (rhs != *this)
			{					
				if (this->_size > 0)
					delete[] this->_array;
				if (rhs._size > 0) 
				{

					this->_array = new T[rhs._size]();
					for (int i = 0; i < rhs._size; i++)
						this->_array[i] = rhs._array[i];
				}
				this->_size = rhs._size;
			}
			return (*this);
		}

		T	&operator[](const unsigned int index)
		{
			if (index >= this->_size)
				throw invalidIndex();
			return (this->_array[index]);
		}

		unsigned int	size() const
		{
			return (this->_size);
		}

		class invalidIndex : public std::exception {
			char const *what() const throw() 
			{
				return ("You're trying to access a unauthorized memory place ! Stop it");
			}
		};
	
	private :

		T *_array;
		unsigned int _size;
		
};