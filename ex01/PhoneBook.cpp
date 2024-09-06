/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:46:40 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/06 19:33:39 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void PhoneBook::AddToPhoneBook(Contact contacts)
{
	
}
void PhoneBook::Bookie(Contact contacts)
{
	
}

int main()
{
	PhoneBook info;
	Contact contacts;
	std::string line;
	
	while (1)
	{
		getline(std::cin, line);
		if (line == "ADD")
		{
			info.Bookie(contacts);
		}
		else if (line == "SEARCH")
		{
			
		}
		else if (line == "EXIT")
			return ;
		else
			std::cout << "provide me with something legit BOIII" << std::endl;
	}
	
}