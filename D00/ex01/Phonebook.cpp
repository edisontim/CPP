#include "my_awesome_phonebook.hpp"

Phonebook::Phonebook() 
{
	this->_index = 0;
	this->_number_of_contacts = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

// ======================================

//GETTERS
// ______________________________________


Contact	Phonebook::get_contact(int index)
{
	return (this->_contacts[index]);
}

int		Phonebook::get_index(void)
{
	return (this->_index);
}

int		Phonebook::get_number_of_contacts(void)
{
	return (this->_number_of_contacts);
}

// SETTERS
// ______________________________________

void	Phonebook::set_contacts(Contact contact)
{
	if (this->_index == 8)
		this->_index = 0;
	if (this->_number_of_contacts < 8)
		this->_number_of_contacts++;
	this->_contacts[this->_index] = contact;
	this->_index++;
	return ;
}

// ======================================