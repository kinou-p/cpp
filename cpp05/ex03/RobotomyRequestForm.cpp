/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:14:32 by apommier          #+#    #+#             */
/*   Updated: 2022/08/05 16:13:44 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm() : AForm(72, 45, "RobotomyRequestForm")
{
    this->_target = "Unknow Target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(72, 45, "RobotomyRequestForm")
{
    this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : AForm(copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
    if (&rhs != this)
        this->_target = rhs._target;
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    AForm::checkExecution(executor);
    std::cout << "Brrrzrzrzrzzrzrzzrrzz...\n";
    std::srand(time(NULL)); 
    if (std::rand() % 2)
        std::cout << this->_target << " has been robotomized\n";
    else
        std::cout << this->_target << " hasn't been robtomized\n";
}