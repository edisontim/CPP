#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int i;

	i = 0;
	AAnimal **anim_array = new AAnimal*[100];
	while (i < 49)
		anim_array[i++] = new Dog();
	while (i < 100)
		anim_array[i++] = new Cat();
	i = 0;
	while (i < 100)
		delete anim_array[i++];
	delete [] anim_array;

	const AAnimal* j = new Dog();
	AAnimal* lol = new Cat();
	std::string *new_ideas = new std::string[100];
	new_ideas[0] = "Let's eat.";
	Brain *new_brain = new Brain;
	new_brain->setIdeas(new_ideas);
	lol->setBrain(new_brain);
	delete j;
	delete lol;
	return (0);
}