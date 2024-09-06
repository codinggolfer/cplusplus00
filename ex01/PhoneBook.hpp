# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

# define MAX_CONTACT 8

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
	~PhoneBook();
};

PhoneBook::PhoneBook(/* args */)
{
}

PhoneBook::~PhoneBook()
{
}



#endif