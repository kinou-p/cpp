/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:53:12 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 20:33:43 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>

template<typename T>
void	printIterator( T it, T end )
{
	if (it != end)
		std::cout << "Iterator: " << *it << std::endl;
	else
		std::cout << "Iterator reach end() of container (the value isn't in containers) " << std::endl;
}

int	main()
{
	std::vector<int>			container;
	std::vector<int>::iterator	it;

	std::cout << "====================Vector=====================\n";
	for (int i = 0; i < 43; i++)
		container.push_back(i);
	it = easyfind(container, 42);
	printIterator(it, container.end());
	it = easyfind(container, 43);
	printIterator(it, container.end());
	
	std::cout << "====================Deque=====================\n";
	std::deque<char>			container2;
	std::deque<char>::iterator	it2;
	for (int i = 0; i < 43; i++)
		container2.push_back(i);
	it2 = easyfind(container2, 42);
	printIterator(it2, container2.end());
	it2 = easyfind(container2, 43);
	printIterator(it2, container2.end());
	return (0);
}