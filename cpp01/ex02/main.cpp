/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 14:10:35 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 17:59:29 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdio>


int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "The memory address of the string variable is | " << &str << std::endl;
	std::cout << "The memory address held by stringPTR is | " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is | " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable is | " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is | " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is | " << stringREF << std::endl;
}