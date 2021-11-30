#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "my_awesome_phonebook.hpp"

class Phonebook
{
	private:

		Contact	_contacts[8];
		int		_index;
		int		_number_of_contacts;

	public:
		
		Phonebook(/* args */);
		~Phonebook();

		Contact	get_contact(int index);
		int		get_index();
		void	set_contacts(Contact contact);
		int		get_number_of_contacts();

};

#endif