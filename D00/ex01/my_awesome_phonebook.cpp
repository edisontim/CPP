#include "my_awesome_phonebook.hpp"

int	print_single_info(std::string str_print)
{
	int	fill;
	
	if (str_print.length() > 10)
	{
		str_print = str_print.substr(0, 10);
		str_print[9] = '.';
	}
	fill = 0;
	while (fill++ + str_print.length() < 10)
		std::cout << " ";
	std::cout << str_print;
	return (1);
}

int	show_contact_list(Phonebook phonebook, int i)
{
	char	index[2];

	index[1] = 0;
	index[0] = i + '0';
	print_single_info(index);
	std::cout << "|";
	print_single_info(phonebook.get_contact(i).get_first_name());
	std::cout << "|";
	print_single_info(phonebook.get_contact(i).get_last_name());
	std::cout << "|";
	print_single_info(phonebook.get_contact(i).get_nickname());
	std::cout << std::endl;
	return (1);
}

int	show_contact_info(Phonebook phonebook, int index)
{
	std::cout << phonebook.get_contact(index).get_first_name() << std::endl;
	std::cout << phonebook.get_contact(index).get_last_name() << std::endl;
	std::cout << phonebook.get_contact(index).get_nickname() << std::endl;
	std::cout << phonebook.get_contact(index).get_phone_number() << std::endl;
	std::cout << phonebook.get_contact(index).get_darkest_secret() << std::endl;
	return (1);
}

int ft_search(Phonebook phonebook)
{
	int			i;
	int			searched_index;
	std::string	buffer;

	i = 0;
	while (i < phonebook.get_number_of_contacts())
		show_contact_list(phonebook, i++);
	while (phonebook.get_index() != 0)
	{
		std::cout << "Please enter a valid contact index : ";
		std::getline(std::cin, buffer);
		if (std::cin.eof())
			return (0);
		if (buffer[1] == 0 && isdigit(buffer[0]))
			searched_index = buffer[0] - '0';
		else
			continue;
		if (searched_index >= 0 && searched_index <= phonebook.get_number_of_contacts() - 1)
			return (show_contact_info(phonebook, searched_index));
		else
			continue;
		std::cout << std::endl;
	}
	return (1);
}

int	ft_add(Phonebook *phonebook)
{
	Contact		new_contact;
	std::string	buffer;
	
	std::cout << "Enter contact's first name : " ;
	std::getline(std::cin, buffer);
	new_contact.set_first_name(buffer);
	std::cout << "Enter contact's last name : " ;
	std::getline(std::cin, buffer);
	new_contact.set_last_name(buffer);
	std::cout << "Enter contact's nickname : " ;
	std::getline(std::cin, buffer);
	new_contact.set_nickname(buffer);
	std::cout << "Enter contact's phone number : " ;
	std::getline(std::cin, buffer);
	new_contact.set_phone_number(buffer);
	std::cout << "Enter contact's darkest secret : " ;
	std::getline(std::cin, buffer);
	new_contact.set_darkest_secret(buffer);
	phonebook->set_contacts(new_contact);
	return (1);
}

int	my_awesome_phonebook(Phonebook *phonebook, std::string command)
{
	if (!command.compare("ADD"))
		ft_add(phonebook);
	if (!command.compare("SEARCH"))
		if (!ft_search(*phonebook))
			return (0);
	if (!command.compare("EXIT"))
		exit(0);
	return (1);
}

int	main()
{
	std::string		str;
	Phonebook		phonebook;

	while (1)
	{
		std::cout << "Enter your command please (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (0);
		if (!my_awesome_phonebook(&phonebook, str))
			return (1);
	}
}