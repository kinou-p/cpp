/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:23:10 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 19:22:37 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int main()
{
	std::cout << "==============Reinterpret cast===============\n\n";
	Data *ptr = new Data;
	uintptr_t intPtr;

	std::cout << "Initialization of Data string to \"Hello im right here!\"\n";
	ptr->proofOfMyExistence = "Hello im right here!\n";
	std::cout << "Data ptr = " << ptr << std::endl;

	std::cout << "\n---Calling serialize()---\n";
	intPtr = serialize(ptr);
	std::cout << "Int ptr = " << &intPtr << std::endl;
	std::cout << "Int value = " << intPtr << std::endl;

	std::cout << "\n---Calling deserialize()---\n";
	Data *ptr2 = deserialize(intPtr);
	std::cout << "Data ptr = " << ptr2 << std::endl;
	std::cout << "String in data = " << ptr2->proofOfMyExistence;	
	delete ptr; //ptr2 == ptr
	return (0);
}