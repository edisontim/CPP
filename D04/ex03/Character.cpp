#include "Character.hpp"


//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
Character::Character(void)
{
	int	i;

	i = 0;
	this->_inventory = new AMateria*[4];
	while (i < 4)
		this->_inventory[i++] = NULL;
	std::cout << "Unnamed character was created." << std::endl;
}

Character::Character(std::string name) : _name(name)
{
	int	i;

	i = 0;
	this->_inventory = new AMateria*[4];
	while (i < 4)
		this->_inventory[i++] = NULL;
}

Character::Character(Character const &cpy)
{
	int			i;
	
	i = 0;
	while (i < 4)
		delete this->_inventory[i++];
	delete [] this->_inventory;
	i = 0;
	this->_inventory = new AMateria*[4];
	while (i < 4)
	{
		this->_inventory[i] = cpy._inventory[i];
		i++;
	}
}

Character::~Character(void)
{
	int	i;

	i = 0;
	while (_inventory[i])
		delete this->_inventory[i++];
	delete [] this->_inventory;
}

//		OPERATORS
//___________________________________

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		int	i;

		i = 0;
		while (i < 4)
			delete this->_inventory[i++];
		delete [] this->_inventory;
		i = 0;
		this->_inventory = new AMateria*[4];
		while (i < 4)
		{
			this->_inventory[i] = rhs._inventory[i];
			i++;
		}
	}
	return (*this);
}

//		GETTERS/SETTERS
//___________________________________
std::string const &Character::getName() const
{
	return (this->_name);
}

//		UTILS
//___________________________________

void	Character::equip(AMateria *m)
{
	int	i;

	if (!m)
		return ;
	i = 0;
	while (i < 4)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
		i++;
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3)
		return ;
	if (!this->_inventory[idx])
		return ;
	this->_inventory = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3)
		return ;
	if (!this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);

}

void	Character::printInventory(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i])
			std::cout << this->_inventory[i]->getType() << std::endl;
		i++;
	}
}