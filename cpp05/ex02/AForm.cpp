/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:54:01 by apommier          #+#    #+#             */
/*   Updated: 2022/07/19 12:54:48 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(int signedGrade, int executionGrade, std::string name) : _name(name)
{
	this->_signedGrade = signedGrade;
	this->_executionGrade = executionGrade;
	this->_isSigned = 0;
	this->checkGrade();
}

AForm::AForm(const AForm& copy)
{
	*this = copy;
}

AForm::~AForm()
{

}

AForm	&AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
	{
		std::cout << "Only grade can be copied, name is const\n";
		this->_signedGrade = rhs.getSignedGrade();
		this->_executionGrade = rhs.getExecutionGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const AForm &Aform)
{
	out << Aform.getName() << "Aform need at least " << Aform.getSignedGrade() << " grade to be signed and ";
	out << Aform.getExecutionGrade() << " grade to be executed, ";
	if (Aform.getIsSigned())
		out << Aform.getName() << " Aform is signed\n";
	else
		out << Aform.getName() << " Aform isn't signed\n";
	return (out);
}

int	AForm::getSignedGrade() const
{
	return (this->_signedGrade);
}

int AForm::getExecutionGrade() const
{
	return (this->_executionGrade);
}

int AForm::getIsSigned() const
{
	return (this->_isSigned);
}

const std::string AForm::getName() const
{
	return (this->_name);
}

void	AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signedGrade)
		throw AForm::signedGradeTooLowException();
	else
	{
		this->_isSigned = 1;
		std::cout << bureaucrat.getName() << " signed " << this->_name << " Aform\n";
	}
}

void		AForm::checkGrade() const
{
	if (this->_signedGrade > 150 || this->_executionGrade > 150)
		throw AForm::GradeTooLowException();
	else if (this->_signedGrade < 1 || this->_executionGrade < 1)
		throw AForm::GradeTooHighException();
}


