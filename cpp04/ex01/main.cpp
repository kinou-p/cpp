/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:04:10 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 19:33:10 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	copyTest()
{
	std::cout << std::endl;
	std::cout << "test to know sort of copy\n";

	Dog firstDog;
	std::cout << std::endl;
	Dog cpyDog = firstDog;
	std::cout << &firstDog << "----" << &cpyDog <<std::endl;
	std::cout << std::endl;

	Cat first;
	std::cout << std::endl;
	Cat cpy = first;
	std::cout << &first << "----" << &cpy<<std::endl;
	std::cout << std::endl;
}

int main()
{
	Animal	*Animals[10];
	Brain	*oneBrain;
	
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			Animals[i] = new Cat;
			oneBrain = Animals[i]->getBrain();
			oneBrain->setIdeas(0, "Sleep");
			oneBrain->setIdeas(1, "Hate");
			oneBrain->setIdeas(2, "Sleep");
		}
		else
		{
			Animals[i] = new Dog;
			oneBrain = Animals[i]->getBrain();
			oneBrain->setIdeas(0, "Sleep");
			oneBrain->setIdeas(1, "Play");
			oneBrain->setIdeas(2, "Ate");
		}
		std::cout << Animals[i]->getType() << std::endl;
	}
	
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "- "<< Animals[i]->getBrain() << std::endl;
	}
	
	copyTest();
	std::cout << "End of copy test\n\n";
	
	std::cout << "Ideas of a cat" << std::endl;
	std::cout << Animals[1]->getBrain()->getIdeas()[0] << std::endl;
	std::cout << Animals[1]->getBrain()->getIdeas()[1] << std::endl;
	std::cout << Animals[1]->getBrain()->getIdeas()[2] << std::endl;

	std::cout << "\nIdeas of a dog" << std::endl;
	std::cout << Animals[6]->getBrain()->getIdeas()[0] << std::endl;
	std::cout << Animals[6]->getBrain()->getIdeas()[1] << std::endl;
	std::cout << Animals[6]->getBrain()->getIdeas()[2] << std::endl;
	std::cout << std::endl;
	
	*Animals[6] = *Animals[1];
	std::cout << std::endl << "Ideas of the previous dog after copy" << std::endl;
	std::cout << Animals[6]->getBrain()->getIdeas()[0] << std::endl;
	std::cout << Animals[6]->getBrain()->getIdeas()[1] << std::endl;
	std::cout << Animals[6]->getBrain()->getIdeas()[2] << std::endl;

	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete Animals[i];
}