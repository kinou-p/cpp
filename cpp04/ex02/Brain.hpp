/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:22:17 by apommier          #+#    #+#             */
/*   Updated: 2022/07/18 09:17:40 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>


class Brain{
	public :
		Brain();
		Brain(const Brain& copy);
		~Brain();
		Brain		&operator=(const Brain& rhs);
		std::string	*getIdeas();
		void		setIdeas(int i, std::string str);

	private:
	
		std::string _ideas[100];	
};

#endif