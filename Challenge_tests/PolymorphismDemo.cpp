#include <iostream>

int GetSize(int x)
{
	return x;
}

int GetSize(std::string x)
{
	return x.length();
}


class Animal
{
public:
	virtual void MakeNoise()
	{
		std::cout << "Animal noise." << std::endl;
	}
};


class Dog : public Animal
{
public:
	 void MakeNoise() override
	{
		std::cout << "Woof" << std::endl;
	}

class Cat : public Animal
{
public:
	void MakeNoise() override
	{
		std::cout << "Meow" << std::endl;
	}
};

void Stroke(Animal* animal)
{
	animal->MakeNoise();
}


int main() {

	std::cout << GetSize(5) << std::endl;
	std::cout << GetSize("Hello world") << std::endl;
	Dog dog;
	Cat cat;
	Stroke(&dog);
	Stroke(&cat);


	return 0;
}
};