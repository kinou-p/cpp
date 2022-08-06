/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:54:09 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 10:31:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <ostream>
# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public :

		Form();
		Form(int signedGrade, int executionGrade, std::string name);
		Form(const Form& copy);
		~Form();
		Form	&operator=(const Form& rhs);

		const std::string getName() const;
		int	getSignedGrade() const;
		int getExecutionGrade() const;
		int getIsSigned() const;
		
		void	checkGrade() const;

		void beSigned(Bureaucrat &bureaucrat);

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
		
	private :
		
		std::string const	_name;
		bool				_isSigned;
		int					_signedGrade;
		int					_executionGrade;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif