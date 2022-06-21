/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 16:15:21 by apommier          #+#    #+#             */
/*   Updated: 2022/06/21 22:02:37 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <sys/stat.h>
# include <fstream>
# include <sstream>
# include <string>


bool verifyPathname(std::string fileOne, std::string toFind, std::string newStr)
{
	if (!fileOne.length() && !toFind.length() && !newStr.length())
	{
		std::cout << "Arguments must not be empty\n";
		return(0);
	}
	return (1);
}

std::string	changeLine(std::string buffer, std::string toFind, std::string newStr)
{
	int position = buffer.find(toFind);

	while (position != std::string::npos)
	{
		buffer.insert(position + toFind.length(), newStr);
		buffer.erase(position, toFind.length());
		position = buffer.find(toFind);
	}
	return (buffer);
}

int	main(int ac, char **av)
{
	std::ifstream fileOne(av[1]);
	std::ofstream newFile;
	std::string allFile;
	std::string buffer;
	std::ofstream outfile((std::string)av[1] + ".replace");
	
	if (ac != 4 || !verifyPathname(av[1], av[2], av[3]) || !fileOne)
	{
		std::cout << "Bad argument\n";
		return (0);
	}
	while (std::getline (fileOne,buffer))
	{
		buffer = changeLine(buffer, av[2], av[3]);
		allFile += buffer + '\n';
	}
	outfile << allFile;
}