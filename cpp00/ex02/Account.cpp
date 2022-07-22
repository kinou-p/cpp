/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Account.cpp										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: apommier <apommier@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/07/20 12:23:50 by apommier		  #+#	#+#			 */
/*   Updated: 2022/07/20 12:48:54 by apommier		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h> 
#include <iostream>
#include <string>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	this->_accountIndex = Account::_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	
	this->_nbDeposits = 1;
	this->_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";nb_deposits:"<< this->_nbDeposits<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";withdrawal:";
	if (this->_amount >= withdrawal)
	{
		this->_nbWithdrawals = 1;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout <<  withdrawal;
		std::cout << ";amount:" << this->checkAmount();
		std::cout << ";nb_withdrawals:"<< this->_nbWithdrawals << std::endl;
		return (1);
	} 
	std::cout << "refused\n";
	return (0);
}

int		Account::checkAmount( void ) const
{
		return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[18];

	time (&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buffer, 20, "[%G%m%d_%H%M%S]", timeinfo);
	/std::cout << buffer;
	//const char *buffeer = "[19920104_091532]";
	//std::cout << buffeer;
}