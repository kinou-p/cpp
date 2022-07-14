/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 05:22:49 by apommier          #+#    #+#             */
/*   Updated: 2022/07/14 01:16:39 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//constructor destructor and assignation

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " Default constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " Destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap " << this->_name << " Assignation operator called" << std::endl;
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

//accessor

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

int			ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int			ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int			ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

/*std::string	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void		ClapTrap::setHitPoints(int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void			ClapTrap::setEnergyPoints(int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void			ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}*/

//member function

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " could not attack because he died" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
	if (this->_hitPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead stop hitting a dead corpse" << std::endl;
	else if (this->_hitPoints - amount <= 0)
		std::cout << "ClapTrap " << this->_name << " died" << std::endl;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " have " << this->_hitPoints << " hit points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " regain " << amount << " hit point(s)!" << std::endl;
	this->_hitPoints += amount;
}
