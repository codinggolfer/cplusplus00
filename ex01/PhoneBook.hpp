# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define MAX_CONTACT 8
# define MAX_LENGHT 10

class PhoneBook
{
private:
	Contact	_contacts[MAX_CONTACT];
public:

	PhoneBook();
	void SearchBook();
	void Exit();
	void Bookie(Contact& contacts);
	void AddToPhoneBook(Contact& contacts);
	std::string FormatContactName(std::string name);
	~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}



#endif