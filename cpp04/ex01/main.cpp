/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:04:10 by apommier          #+#    #+#             */
/*   Updated: 2022/08/03 13:44:10 by apommier         ###   ########.fr       */
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
	Dog first;
	Dog cpy = first;
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
	for (int i = 0; i < 10; i++)
	{
		std::cout << i + 1 << "- "<< Animals[i]->getBrain() << std::endl;
	}
	//copyTest();
	for (int i = 0; i < 10; i++)
		delete Animals[i];
}

// int	main( void )
// {
// 	Animal	*animals[10];
// 	Brain	*brain;

// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i < 5)
// 			animals[i] = new Cat();
// 		else
// 			animals[i] = new Dog();
// 		std::cout << animals[i]->getType() << std::endl;
// 	}

// 	brain = animals[7]->getBrain();
// 	brain->setIdeas(0, "I'm hungry");
// 	brain->setIdeas(1, "That's a strange idea I'm having");
// 	brain->setIdeas(2, "Ball!!!!!");
// 	brain->setIdeas(3, "Squirrel!!!!!");
// 	std::cout << std::endl << animals[7]->getBrain()->getIdeas()[0] << std::endl;
// 	std::cout << animals[7]->getBrain()->getIdeas()[2] << std::endl;

// 	*(animals[5]) = *(animals[7]);
// 	std::cout << animals[5]->getBrain()->getIdeas()[2] << std::endl;
// 	std::cout << "Test of copy\n";
// 	animals[7]->getBrain()->setIdeas(2, "Squirrel!!!!!");
// 	std::cout << animals[5]->getBrain()->getIdeas()[2] << std::endl << std::endl;
// 	for (int i = 0; i < 10; i++)
// 		delete animals[i];
// }