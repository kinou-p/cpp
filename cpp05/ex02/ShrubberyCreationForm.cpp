/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:00:14 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 19:44:50 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
# include <iostream>
# include <fstream>
# include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(145, 137, "RobotomyRequestForm")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, 137, "RobotomyRequestForm")
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy)
{
    *this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
    if (&rhs != this)
        this->_target = rhs._target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::string name = this->_target;
    std::cout << name << std::endl;
    AForm::execute(executor);
    std::ofstream outfile((std::string)name + "test");
    outfile << "                                                         .\n                                              .         :  \n                 .              .              ::     ::   \n                   .           .                :::  ::   \n                    :         :                   ::::.     ..   \n           ..        ::     ::            :        ::.    .:\n             :       :::  :::        .     ::    :::    .:.\n              ::       ::::      .  :       ::  :::   .::. \n               :::      ::        :::        : :::  .::.\n                `::.     :::     ::.         `::::.::.\n                 `:::.    :::. :::        :: :::::.\n                    `:::.  ::bd::          :::::.\n                      `:::.  :::.         ::::.   \n                        `::.  `:::.      ::::         \n                          `:::. `:::    ::::        \n                            :::. ::::  ::::       \n                              ::bd:::bd::::     \n                                ::::::::::\n                                ::::::::\n                                :::(o):  . .         \n                                ::o:::(...         \n                            `.. ::o::::         \n                               `):o::::         \n                                ::(o):::        \n                               .::::::         \n                               :::::::.          \n                              :::::::::. \n                          ...::::::::::...";
}
