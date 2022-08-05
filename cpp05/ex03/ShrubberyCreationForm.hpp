/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:00:12 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 18:54:10 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUBBERYCREATIONFORM_HPP 
# define SHRUBBERYCREATIONFORM_HPP 

# include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	public :
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm& rhs);

		void execute(Bureaucrat const & executor) const;

	private :

		std::string _target;
};

#endif