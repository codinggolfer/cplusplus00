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

void PhoneBook::SearchBook()
{
	int i = 0;

	std::cout << "Contact " << i + 1 << ": ";
        _contacts[i].print();
}

void PhoneBook::AddToPhoneBook(Contact& contacts)
{
	static int	i = 0;

	_contacts[i] = contacts;
	i++;
	if (i == 7)
		i = 0;
}

void PhoneBook::Bookie(Contact& contacts)
{
	std::string line;
	int i = 0;

		do {
			switch (i) {
            case 0:
                std::cout << "Firstname: ";
                break;
            case 1:
                std::cout << "Lastname: ";
                break;
            case 2:
                std::cout << "Nickname: ";
                break;
            case 3:
                std::cout << "Phone Number: ";
                break;
            case 4:
                std::cout << "Darkest Secret: ";
                break;
        }
			getline(std::cin, line);
			if (line.empty()){
				std::cout << "fill in the asked detail" << std::endl;
				continue ;
			}
			 switch (i) {
            case 0:
                contacts.setF(line);
                break;
            case 1:
                contacts.setL(line);
                break;
            case 2:
                contacts.setN(line);
                break;
            case 3:
                contacts.setP(line);
                break;
            case 4:
                contacts.setD(line);
                break;
        }
			i++;
		} while (i < 5);
}

int main(void)
{
	PhoneBook info;
	Contact contacts;
	std::string line;
	
	while (1)
	{
		std::cout << "PhoneBook navigate with ADD, SEARCH or EXIT: ";
		getline(std::cin, line);
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