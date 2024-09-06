/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:46:43 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/06 18:58:03 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getF()
{
	return FirstName;
}
std::string Contact::getL()
{
	return LastName;
}
std::string Contact::getN()
{
	return Nickname;
}
std::string Contact::getP()
{
	return PhoneNumber;
}
std::string Contact::getD()
{
	return DarkestSecter;
}

void Contact::setF(std::string str)
{
	FirstName = str;
}
void Contact::setL(std::string str)
{
	LastName = str;
}
void Contact::setN(std::string str)
{
	Nickname = str;
}
void Contact::setP(std::string str)
{
	PhoneNumber = str;
}
void Contact::setD(std::string str)
{
	DarkestSecter = str;
}