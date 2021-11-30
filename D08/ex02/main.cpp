#include "MutantStack.hpp"
#include <vector>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);


	MutantStack<int> mstack1;
	mstack1.push(5);
	mstack1.push(17);
	mstack1.push(3);
	mstack1.push(5);
	mstack1.push(737);
	mstack1.push(9);
	mstack1.push(12353);
	mstack1.push(439825);
	mstack1.push(1293819);
	mstack1.push(190);
	mstack1.push(198);
	mstack1.push(743958);


	std::cout << "mstack1 > mstack ? " << (mstack1 > mstack) << std::endl;
	
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	it--;
	it++;
	std::cout << "mstack is :" << std::endl;
	while (it != ite)
	{
		std::cout << "|" << *it << "|" << std::endl;
		it++;
	}


	it = mstack1.begin();
	ite = mstack1.end();
	std::cout << "mstack1 is :" << std::endl;
	while (it != ite)
	{
		std::cout << "|" << *it << "|" << std::endl;
		it++;
	}


	MutantStack<int> s(mstack);
	it = s.begin();
	ite = s.end();
	std::cout << "Copy constructed s is :" << std::endl;
	while (it != ite)
	{
		std::cout << "|" << *it << "|" << std::endl;
		it++;
	}

	s = mstack1;
	it = s.begin();
	ite = s.end();
	std::cout << "After assignment operator s is :" << std::endl;
	while (it != ite)
	{
		std::cout << "|" << *it << "|" << std::endl;
		it++;
	}
	return 0;
}
