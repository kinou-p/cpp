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

		AForm();
		AForm(int signedGrade, int executionGrade, std::string name);
		AForm(const AForm& copy);
		virtual ~AForm();
		AForm	&operator=(const AForm& rhs);

		const std::string getName() const;
		int	getSignedGrade() const;
		int getExecutionGrade() const;
		int getIsSigned() const;
		
		void	checkGrade() const;

		void beSigned(Bureaucrat &bureaucrat);
		virtual void execute(Bureaucrat const & executor) const = 0;
		void checkExecution(Bureaucrat const & executor) const;

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();	
		};

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		class signedGradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		class executionGradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		
		class formIsNotSignedException : public std::exception
		{
			public :
				virtual const char* what() const throw();	
		};

	private :
		
		std::string const	_name;
		bool				_isSigned;
		int					_signedGrade;
		int					_executionGrade;
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);

#endif