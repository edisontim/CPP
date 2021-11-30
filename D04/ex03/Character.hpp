#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:

	AMateria **_inventory;
	std::string _name;

public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	Character(void);
	Character(Character const &cpy);
	Character(std::string name);
	virtual ~Character(void);
	

//		OPERATORS
//___________________________________
	Character					&operator=(Character const &rhs);

//		GETTERS/SETTERS
//___________________________________
	virtual std::string const	&getName() const;

//		UTILS
//___________________________________
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
	virtual void				printInventory(void);

};


#endif