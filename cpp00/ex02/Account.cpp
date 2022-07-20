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

int	Account::getNbAccounts( void )
{
	return (this->_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (this->_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (this->_nbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (this->_nbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
		
}

Account::Account( int initial_deposit )
{
	this->_nbAccounts = 0;
	this->_totalAmount = initial_deposit;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_accountIndex = 0;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::Account()
{
	this->_nbAccounts = 0;
	this->_totalAmount = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

Account::~Account( void )
{
		
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits = 1;
	this->_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	if (this->_totalAmount >= withdrawal)
	{
		this->_nbWithdrawals = 1;
		this->_totalNbWithdrawals++;
		this->_amount -= withdrawal;
		return (1);
	}
	return (0);
}

int		Account::checkAmount( void ) const
{
		
}

void	Account::displayStatus( void ) const
{
		
}

void	Account::_displayTimestamp( void )
{
		
}
