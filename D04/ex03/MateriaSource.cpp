#include "MateriaSource.hpp"

//		CONSTRUCTORS/DESTRUCTOR
//___________________________________
MateriaSource::MateriaSource(void)
{
	int	i;

	i = 0;
	this->_copied_materias = new AMateria*[4];
	while (i < 4)
		this->_copied_materias[i++] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	int	i;

	i = 0;
	while (i < 4)
		if (this->_copied_materias)
			delete this->_copied_materias[i++];
	delete [] this->_copied_materias;
	i = 0;
	this->_copied_materias = new AMateria*[4];
	while (i < 4)
	{
		this->_copied_materias[i] = cpy._copied_materias[i];
		i++;
	}
}

MateriaSource::~MateriaSource()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_copied_materias[i])
			delete this->_copied_materias[i];
		i++;
	}
	delete [] this->_copied_materias;	
}

//		OPERATORS
//___________________________________
MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		int	i;

		i = 0;
		while (i < 4)
			if (this->_copied_materias)
				delete this->_copied_materias[i++];
		delete [] this->_copied_materias;
		i = 0;
		this->_copied_materias = new AMateria*[4];
		while (i < 4)
		{
			this->_copied_materias[i] = rhs._copied_materias[i];
			i++;
		}	
	}
	return (*this);
}

//		UTILS
//___________________________________
void	MateriaSource::learnMateria(AMateria *to_copy)
{
	int	i;
	
	i = 0;
	while (i < 4)
	{
		if (!_copied_materias[i])
		{
			_copied_materias[i] = to_copy;
			return ;
		}	
		i++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!this->_copied_materias[i])
			return (NULL);
		if (!type.compare(this->_copied_materias[i]->getType()))
			return (this->_copied_materias[i]->clone());
		i++;
	}
	return (0);
}

void	MateriaSource::printMaterias(void)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->_copied_materias[i])
			std::cout << this->_copied_materias[i]->getType() << " | ";
		i++;
	}
	std::cout << std::endl;
}
