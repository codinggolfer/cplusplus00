/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 10:22:15 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/16 10:31:37 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook info;
	Contact contacts;
	std::string line;
	
	while (1)
	{
		std::cout << "PhoneBook navigate with ADD, SEARCH or EXIT: ";
		getline(std::cin, line);
		if (std::cin.eof()){
			std::cout << std::endl << "ctrl + d is forbidden" << std::endl;
			exit(0) ;
		}
		if (line == "ADD")
		{
			info.Bookie(contacts);
			info.AddToPhoneBook(contacts);
		}
		else if (line == "SEARCH")
		{
			info.SearchBook();
		}
		else if (line == "EXIT")
		{
			std::cout << "welcome back to the future" << std::endl;
			return (0);
		}
		else
			std::cout << "provide me with something legit BOIII" << std::endl;
	}
	return 0;
}