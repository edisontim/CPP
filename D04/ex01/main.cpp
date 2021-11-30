#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	int i;

	i = 0;
	Animal **anim_array = new Animal*[100];
	while (i < 49)
		anim_array[i++] = new Dog();
	while (i < 100)
		anim_array[i++] = new Cat();
	std::cout << anim_array[10]->getType() << std::endl;
	i = 0;
	while (i < 100)
		delete anim_array[i++];
	delete [] anim_array;
}