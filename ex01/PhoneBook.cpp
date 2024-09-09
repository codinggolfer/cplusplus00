/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagbomei <eagbomei@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:46:40 by eagbomei          #+#    #+#             */
/*   Updated: 2024/09/09 11:35:33 by eagbomei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string PhoneBook::FormatContactName(std::string name)
{
    if (name.length() > MAX_LENGHT) {
        return name.substr(0, MAX_LENGHT - 1) + '.';
    } else {
        return name + std::string(MAX_LENGHT - name.length(), ' ');
    }
}

void PhoneBook::SearchBook()
{
	std::string line;
	int num;

	std::cout << std::setw(10) << std::left << "index " << "| " << std::setw(10) << std::left << "first name" << "| " << std::setw(10) << std::left << "last name" << "| " << std::setw(10) << std::left << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		std::cout << std::setw(10) << std::right << i + 1 << "| "
		<< std::setw(10) << std::left << PhoneBook::FormatContactName(_contacts[i].getF()) << "| "
		<< std::setw(10) << std::left << PhoneBook::FormatContactName(_contacts[i].getL()) << "| "
		<< std::setw(10) << std::left << PhoneBook::FormatContactName(_contacts[i].getN()) << "|" << std::endl;
	while (1)
	{
		std::cout << "Enter a number 1-8 to open contact or return with BACK: ";
		getline(std::cin, line);
		if (line.empty())
				continue ;
		if (line == "BACK")
			return ;
		try{
			num = std::stoi(line);
		} catch(const std::invalid_argument& e) {
		 	std::cerr << "Only numbers please " << std::endl;
		} catch(const std::out_of_range& e) {
			std::cerr << "Out of range " << std::endl;
		}
		if (num > 0 && num < 9)
			_contacts[num - 1].print();
		num = 0;
	}
}

void PhoneBook::AddToPhoneBook(Contact& contacts)
{
	static int	i = 0;

	_contacts[i] = contacts;
	i++;
	if (i == 8)
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