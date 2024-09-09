/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:57:34 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/09 16:43:01 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;

// void Account::_displayTimestamp()
// {
// 	//TODO
// }

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	++_nbAccounts;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";" << "amount:" << initial_deposit << ";" << "created" << std::endl;
	
}

Account::~Account()
{
	std::cout << "closed" << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " " << _accountIndex << ";" << "amount:" << this->_totalAmount << ";" << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" << getTotalAmount() << ";" << "deposits:"
	<< getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts(){
	return _nbAccounts;
}
int	Account::getTotalAmount(){
	return _totalAmount;
}
int	Account::getNbDeposits(){
	return _totalAmount;
}
int	Account::getNbWithdrawals(){
		return _totalNbWithdrawals;
}
