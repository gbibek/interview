#include <iostream>



class Animal
{
public:
virtual void eat() { std::cout << "I'm eating generic food."<<std::endl; }
};

class Cat : public Animal
{
public:
void eat() { std::cout << "I'm eating a rat."<<std::endl; }
};

//this can go at the top of the main.cpp file
void func(Animal xyz) { xyz.eat(); }

int main()
{

   Animal animal = new Animal;
   Cat cat = new Cat;

   func(animal); // outputs: "I'm eating generic food."
   func(cat);    // outputs: "I'm eating generic food."

return 0;
}

