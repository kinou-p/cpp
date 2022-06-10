/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:30:06 by apommier          #+#    #+#             */
/*   Updated: 2022/06/10 13:20:28 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout <<  "   --Zombie on the Heap--" << std::endl;
	Zombie	*heap = newZombie("Bob");
	heap->announce();
	delete heap;
	std::cout <<  "   --Zombie on the Stack--" << std::endl;
	randomChump("John");
	return (0);
}