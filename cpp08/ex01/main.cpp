/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:32:50 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 23:16:52 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(-3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(110);
		std::cout << "Container just accept some new values\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "shortest span : "<< sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;

	std::cout << "\n======================Multiple nbr========================\n";
	Span sp2 = Span(15);
	sp2.addNumber(6);
	sp2.addNumber(-3);
	sp2.addNumber(17);
	sp2.addNumber(9);
	sp2.addNumber(11);
	try
	{
		int intTab[] = {0,1,2,3,4,5,6,7,8,-9};
		sp2.addRangeOfIterators(intTab, 10);
		std::cout << "Container just accept some new values\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
//bad
	try
	{
		int intTab2[] = {0,1,2,3,4,5,6,7,8,-9};
		sp2.addRangeOfIterators(intTab2, 10);
		std::cout << "Container just accept some new values\n";
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "shortest span : "<< sp2.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp2.longestSpan() << std::endl;
	std::cout << "\n======================Only one or two digit========================\n";
	Span sp3 = Span(15);
	std::cout << "----with zero digit----\n";
	try
	{
		sp3.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp3.longestSpan();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "----with one digit----\n";
	sp3.addNumber(6);
	try
	{
		sp3.shortestSpan();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp3.longestSpan();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "----with two digit----\n";
		sp3.addNumber(6);
	try
	{
		std::cout << "shortest span : "<< sp3.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp3.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}