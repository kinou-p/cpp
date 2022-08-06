/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:53:32 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 18:29:37 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>
#include <limits.h>
#include <float.h>
#include <math.h>
#include <iomanip>

void	printNan(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "-inf" || str == "+inf" || str == "nan")
		str += "f";
	std::cout << "float: " << str << std::endl;
	if (str == "-inff" || str == "+inff" || str == "nanf")
		str.erase(str.end()-1);
	std::cout << "double: " << str << std::endl;
}

void	printConversion(double nbr)
{	
//char cast
	if (nbr <= CHAR_MAX && nbr >= CHAR_MIN && nbr <= 31)
		std::cout << "char: Non displayable\n";
	else if (nbr < CHAR_MAX && nbr > CHAR_MIN)
		std::cout << "char: " << static_cast<char>(nbr) << std::endl;
	else
		std::cout << "char: impossible\n";

//int cast
	if (nbr <= INT_MAX && nbr >= INT_MIN)
		std::cout << "int: " << static_cast<int>(nbr) << std::endl;
	else
		std::cout << "int: impossible\n";

//float cast
	if (nbr <= FLT_MAX && nbr >= -FLT_MAX)
	{
		std::cout << "float: " << static_cast<float>(nbr);
		if (static_cast<float>(nbr) == floor(nbr))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	else
		std::cout << "float: impossible\n";

//double cast
	std::cout << "double: " << static_cast<double>(nbr);
	if (static_cast<double>(nbr) == floor(nbr))
		std::cout << ".0";
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	double nbr;
	std::stringstream ss;
	std::string nbrStr;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (0);
	}
	nbrStr = av[1];
	if (nbrStr == "-inf" || nbrStr == "+inf" || nbrStr == "nan" || nbrStr == "-inff" || nbrStr == "+inff" || nbrStr == "nanf")
	{
		printNan(nbrStr);
		return (0);
	}
	ss << nbrStr;
	ss >> nbr;
	if(ss.fail())
	{
		std::cout << "Bad entry ! Try to insert a good number\n";
		return (0);
	}
	printConversion(nbr);
}