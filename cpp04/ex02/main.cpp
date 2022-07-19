/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 02:04:10 by apommier          #+#    #+#             */
/*   Updated: 2022/07/18 20:29:04 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*int main()
{
	Animal	*Animals[10];
	Brain	*OneBrain;
	
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			Animals[i] = new Cat;
			Animals[i]->getBrain()->setgetIdeas(0) "Sleep");
			Animals[i]->getBrain()->setgetIdeas(1) "Hate");
			Animals[i]->getBrain()->setgetIdeas(2) "Sleep");
		}
		else
		{
			Animals[i] = new Dog;
			Animals[i]->getBrain()->setgetIdeas(0) "Sleep");
			Animals[i]->getBrain()->setgetIdeas(1) "Play");
			Animals[i]->getBrain()->setgetIdeas(2) "Ate");
		}
		std::cout << Animals[i]->getType() << std::endl;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout << Animals[i]->getBrain() << std::endl;
	}
	for (int i = 0; i < 10; i++)
		delete Animals[i];
}*/

int	main( void )
{
	Animal	*animals[10];
	Brain	*brain;

	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		std::cout << animals[i]->getType() << std::endl;
	}

	brain = animals[7]->getBrain();
	brain->setIdeas(0, "I'm hungry");
	brain->setIdeas(1, "That's a strange idea I'm having");
	brain->setIdeas(2, "Ball!!!!!");
	brain->setIdeas(3, "Squirrel!!!!!");
	std::cout << std::endl << animals[7]->getBrain()->getIdeas()[0] << std::endl;
	std::cout << animals[7]->getBrain()->getIdeas()[2] << std::endl;

	*(animals[5]) = *(animals[7]);
	std::cout << animals[5]->getBrain()->getIdeas()[2] << std::endl;
	std::cout << "Test of copy\n";
	animals[7]->getBrain()->setIdeas(2, "Squirrel!!!!!");
	std::cout << animals[5]->getBrain()->getIdeas()[2] << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
}