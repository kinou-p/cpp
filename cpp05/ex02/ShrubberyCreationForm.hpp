/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:00:12 by apommier          #+#    #+#             */
/*   Updated: 2022/07/23 13:43:44 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUBBERYCREATIONFORM_HPP 
# define SHRUBBERYCREATIONFORM_HPP 

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	public :
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& rhs);

		void execute(Bureaucrat const & executor) const;

		
	private :
};

#endif