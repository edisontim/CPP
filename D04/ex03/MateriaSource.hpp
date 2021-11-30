#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
private:

	AMateria **_copied_materias;

public:

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
	MateriaSource(void);
	MateriaSource(MateriaSource const &cpy);
	virtual ~MateriaSource();

//		OPERATORS
//___________________________________
	MateriaSource &operator=(MateriaSource const &rhs);

//		UTILS
//___________________________________
	virtual void learnMateria(AMateria* to_copy);
	virtual AMateria* createMateria(std::string const & type);
	virtual void	printMaterias();
};

#endif