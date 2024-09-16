/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:57:34 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/16 11:04:20 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _nbDeposits(0), _nbWithdrawals(0)
{
	_accountIndex = _nbAccounts;
	++_nbAccounts;
	_totalAmount += initial_deposit;
	_amount = initial_deposit;
	_displayTimestamp();

	std::cout 	<< " " << "index:" << _accountIndex << ";"
				<< "amount:" << initial_deposit << ";"
				<< "created" << std::endl;
	
}

void Account::displayStatus() const
{
	_displayTimestamp();

	std::cout 	<< " " << "index:" << this->_accountIndex << ";"
				<< "amount:" << this->checkAmount() << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals
				<<  std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();

	std::cout 	<< " " << "accounts:"
				<< getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void Account::makeDeposit(int deposit)
{
	++_nbDeposits;
	_displayTimestamp();

	std::cout 	<< " "
				<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->checkAmount() << ";"
				<< "deposit:" << deposit << ";";

	_amount += deposit;

	std::cout 	<< "amount:" << this->checkAmount() << ";"
				<< "nb_deposits:" <<this->_nbDeposits << std::endl;

	_totalAmount += deposit;
	_totalNbDeposits += _nbDeposits; 
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();

	std::cout 	<< " "
				<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << this->checkAmount() << ";";

	if (this->checkAmount() - withdrawal >= 0)
	{
		++_nbWithdrawals;

		std::cout 	<< "withdrawal:" << withdrawal << ";"
					<< "amount:" << this->checkAmount() - withdrawal << ";"
					<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

		++_totalNbWithdrawals;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		return true ;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
}

void Account::_displayTimestamp()
{
	std::time_t now = std::time(0);
	std::tm* local_time = std::localtime(&now);
	char buffer[20];
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local_time);
    std::cout << buffer;
	//std::cout << "[19920104_091532]";

}

Account::~Account()
{
	_displayTimestamp();

	std::cout 	<< " " << "index:" << _accountIndex << ";"
				<< "amount:" << checkAmount() << ";"
				<< "closed" << std::endl;
}

int Account::checkAmount() const{
	return _amount;
}

int	Account::getNbAccounts(){
	return _nbAccounts;
}

int	Account::getTotalAmount(){
	return _totalAmount;
}

int Account::getNbDeposits(){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(){
		return _totalNbWithdrawals;
}
