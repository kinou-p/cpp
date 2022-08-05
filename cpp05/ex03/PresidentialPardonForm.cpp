/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:16:26 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 18:52:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "PresidentialPardonForm")
{
    this->_target = "anonymousTarget";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(25, 5, "PresidentialPardonForm")
{
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy)
{
    *this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
    if (&rhs != this)
        this->_target = rhs._target;
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    AForm::checkExecution(executor);
    std::cout << this->_target << " has been forgiven by Zaphod Beeblebrox\n";
}
