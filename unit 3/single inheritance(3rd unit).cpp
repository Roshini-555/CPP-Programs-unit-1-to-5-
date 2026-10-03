//. Incorporate various forms of Inheritance - 1.Single Inheritance 2.Multiple Inheritances , 3.Multilevel Inheritance , 4.Hierarchial Inheritance , 5.Hybrid Inheritance
//Single Inheritance
#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout << "Animal eats" << endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};
int main()
{
    Dog d;
    d.eat();
    d.bark();
    return 0;
}
