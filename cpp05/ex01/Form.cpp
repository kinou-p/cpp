/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:54:01 by apommier          #+#    #+#             */
/*   Updated: 2022/07/19 12:54:48 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("unnamed form")
{
	this->_signedGrade = 1;
	this->_executionGrade = 1;
	this->_isSigned = 0;
}

Form::Form(int signedGrade, int executionGrade, std::string name) : _name(name)
{
	this->_signedGrade = signedGrade;
	this->_executionGrade = executionGrade;
	this->_isSigned = 0;
	this->checkGrade();
}

Form::Form(const Form& copy)
{
	*this = copy;
}

Form::~Form()
{

}

Form	&Form::operator=(const Form& rhs)
{
	if (this != &rhs)
	{
		std::cout << "Only grade can be copied, name is const\n";
		this->_signedGrade = rhs.getSignedGrade();
		this->_executionGrade = rhs.getExecutionGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << "form need at least " << form.getSignedGrade() << " grade to be signed and ";
	out << form.getExecutionGrade() << " grade to be executed, ";
	if (form.getIsSigned())
		out << form.getName() << " form is signed\n";
	else
		out << form.getName() << " form isn't signed\n";
	return (out);
}

int	Form::getSignedGrade() const
{
	return (this->_signedGrade);
}

int Form::getExecutionGrade() const
{
	return (this->_executionGrade);
}

int Form::getIsSigned() const
{
	return (this->_isSigned);
}

const std::string Form::getName() const
{
	return (this->_name);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signedGrade)
		throw Form::signedGradeTooLowException();
	else
	{
		this->_isSigned = 1;
		std::cout << bureaucrat.getName() << " signed " << this->_name << " form\n";
	}
}

void		Form::checkGrade() const
{
	if (this->_signedGrade > 150 || this->_executionGrade > 150)
		throw Form::GradeTooLowException();
	else if (this->_signedGrade < 1 || this->_executionGrade < 1)
		throw Form::GradeTooHighException();
}


