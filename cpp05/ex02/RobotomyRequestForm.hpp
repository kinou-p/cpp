/* ************************************************************************** */
/*																			  */
/*														:::	  ::::::::        */
/*   RobotomyRequestForm.hpp							:+:	  :+:	:+:       */
/*													+:+ +:+		 +:+	      */
/*   By: apommier <apommier@student.42.fr>		  +#+  +:+	   +#+		      */
/*												+#+#+#+#+#+   +#+		      */
/*   Created: 2022/07/19 13:00:11 by apommier		  #+#	#+#			      */
/*   Updated: 2022/07/23 12:30:09 by apommier		 ###   ########.fr	   	  */
/*																			  */
/* ************************************************************************** */

#ifndef  ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : public AForm{
	public :
		
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm& rhs);

		void execute(Bureaucrat const & executor) const;

	private :

		std::string _target;
};

#endif