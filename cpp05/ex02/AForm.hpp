/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:54:09 by apommier          #+#    #+#             */
/*   Updated: 2022/07/19 12:52:43 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <ostream>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	public :

		AForm(int signedGrade, int executionGrade, std::string name);
		AForm(const AForm& copy);
		virtual ~AForm() = 0;
		AForm	&operator=(const AForm& rhs);

		const std::string getName() const;
		int	getSignedGrade() const;
		int getExecutionGrade() const;
		int getIsSigned() const;
		
		void	checkGrade() const;

		void beSigned(Bureaucrat &bureaucrat);
		void execute(Bureaucrat const & executor) const;

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Signed or Execution grade is too low\n");
				}	
		};

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Signed or Execution grade is too high\n");
				}	
		};

		class signedGradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Signed grade is too low\n");
				}	
		};

		class executionGradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Execution grade is too low\n");
				}	
		};
		
		class formIsNotSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("Form isn't signed\n");
				}	
		};

	private :
		
		std::string const	_name;
		bool				_isSigned;
		int					_signedGrade;
		int					_executionGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);

#endif