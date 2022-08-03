/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 21:34:42 by apommier          #+#    #+#             */
/*   Updated: 2022/08/02 18:18:19 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name)
{
	this->_grade = grade;
	this->checkGrade();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
	{
		std::cout << "Only grade can be copied, name is const\n";
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

const std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::upGrade()
{
	this->_grade--;
	this->checkGrade();
}

void	Bureaucrat::downGrade()
{
	this->_grade++;
	this->checkGrade();
}

void		Bureaucrat::checkGrade() const
{
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::signForm(AForm form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn’t sign " << form.getName() << " form because "<< e.what();
	}
}
