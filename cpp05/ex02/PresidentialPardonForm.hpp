/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:16:28 by apommier          #+#    #+#             */
/*   Updated: 2022/07/23 13:43:32 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public :
    
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& copy);
        ~PresidentialPardonForm();
        PresidentialPardonForm	&operator=(const PresidentialPardonForm& rhs);
        
	private :
};

#endif