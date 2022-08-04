/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:04:10 by apommier          #+#    #+#             */
/*   Updated: 2022/08/04 13:59:07 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();//will output the animal sound!
	
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	std::cout << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* falseWrongCat = new WrongCat();
	const WrongCat* realWrongCat = new WrongCat();
	std::cout << std::endl << falseWrongCat->getType() << " " << std::endl << std::endl;
	falseWrongCat->makeSound(); //will output the WrongAnimal sound!
	meta2->makeSound(); //same
	realWrongCat->makeSound();//will output the WrongCat sound!
	std::cout << std::endl;

	delete realWrongCat;
	delete meta2;
	delete falseWrongCat;
	
	return 0;
}