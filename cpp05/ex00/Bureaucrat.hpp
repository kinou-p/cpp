/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:43 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 10:51:46 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <ostream>
# include <string>
# include <iostream>

class Bureaucrat{
	public:

		Bureaucrat();
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat& copy);
		~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat& rhs);

		const std::string getName() const;
		int			getGrade() const;
		void 		upGrade();
		void		downGrade();
		void		checkGrade() const;

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
		
	private:

		std::string const _name;
		int			_grade;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif