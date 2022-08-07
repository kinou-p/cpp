/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:21:49 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 17:08:20 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	std::cout << "\n===================Modify array===================\n";
	try
    {
		std::cout << "numbers[MAX_VAL - 1] = " << numbers[MAX_VAL - 1] << std::endl;
		std::cout << "----Assignation----\n";
        numbers[MAX_VAL - 1] = 0;
		std::cout << "numbers[MAX_VAL - 1] = " << numbers[MAX_VAL - 1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;//



//char array
	std::cout << "\n===================Char array===================\n";
    Array<char> chars(15);
    char* mirror2 = new char[15];
	for (int i = 0; i < 15; i++)
    {
        const int value = rand() % 93 + 31;
        chars[i] = value;
        mirror2[i] = value;
    }
    //SCOPE
    {
        Array<char> tmp = chars;
        Array<char> test(tmp);
    }
    for (int i = 0; i < 15; i++)
    {
        if (mirror2[i] != chars[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	for (int i = 0; i < 15; i++)
		std::cout << chars[i] << std::endl;
	try
    {
		std::cout << chars.size() << std::endl;
		std::cout << "chars[MAX_VAL - 1] = " << chars[14] << std::endl;
		std::cout << "----Assignation----\n";
        chars[14] = '0';
		std::cout << "chars[MAX_VAL - 1] = " << chars[14] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	delete[] mirror2;
    return 0;
}