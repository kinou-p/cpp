/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 05:22:55 by apommier          #+#    #+#             */
/*   Updated: 2022/07/13 06:53:00 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap John("John");
	John.attack("Jean");
	John.takeDamage(5);
	John.takeDamage(4);
	John.takeDamage(1);
	John.takeDamage(1);
	John.attack("Jean");
	return (0);
}