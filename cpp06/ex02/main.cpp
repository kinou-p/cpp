/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:47:29 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 19:20:39 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <time.h>

#include <unistd.h>//for usleep (rand() seed is based on time)

Base * generate(void)
{
	Base *ret = 0;

	std::srand(time(NULL)); 
	int chooseClass = std::rand() % 3;
    switch(chooseClass)
	{
		case 0:
			ret = (new A);
			std::cout << "A class generated\n";
			break;
		case 1:
			ret = (new B);
			std::cout << "B class generated\n";
			break;
		case 2:
			ret = (new C);
			std::cout << "C class generated\n";
			break;	
	}
	return (ret);
}

void identify(Base& p)
{
	Base test;
	try
	{
		test = dynamic_cast<A&>(p);
		std::cout << "The class is of type A\n";
	}
	catch(std::exception &e){}
	try
	{
		test = dynamic_cast<B&>(p);
		std::cout << "The class is of type B\n";
	}
	catch(std::exception &e){}
	try
	{
		test = dynamic_cast<C&>(p);
		std::cout << "The class is of type C\n";
	}
	catch(std::exception &e){}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "The class is of type A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "The class is of type B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "The class is of type C\n";
}


int main()
{
	Base *test;

	for (int i = 0; i < 10; i++)
	{
		usleep(1017500);
		std::cout << "\n======================New class======================\n\n";
		std::cout << "Generating random class\n";
		test = generate();
		std::cout << "\nCalling identify (pointer)\n";
		identify(test);
		std::cout << "\nCalling identify (reference)\n";
		identify(*test);
		delete test;
	}
}