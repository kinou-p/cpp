/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:43 by apommier          #+#    #+#             */
/*   Updated: 2022/07/19 12:52:52 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <ostream>
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat{
	public:

		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat& copy);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat& rhs);

		const std::string getName() const;
		int			getGrade() const;
		void 		upGrade();
		void		downGrade();
		void		checkGrade() const;
		
		void signForm(Form form);

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat grade is too low\n");
				}	
		};

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Bureaucrat grade is too high\n");
				}	
		};
		
	private:

		std::string const _name;
		int			_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif