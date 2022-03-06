#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal
{
    int num;

public:
    Animal() : num(0) {}
    virtual void getName() { std::cout << "Animal"; }
    void hello() { getName(); }
};

class Dog : public Animal
{
    int num;

public:
    Dog() : num(1) {}
    void getName() { std::cout << "Dog"; }
    void dog_bark() { std::cout << "woof"; }
};

void caller(Animal& animal)
{
    animal.hello();
}

int main()
{
    Dog d;
    Animal ad;

}