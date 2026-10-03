//Multilevel Inheritance 
#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"Class A";
    }
};
class B:public A
{
public:
    void display()
    {
        cout<<"\nClass B";
    }
};
class C:public B
{
public:
    void print()
    {
        cout<<"\nClass C";
    }
};
int main()
{
    C obj;
    obj.show();
    obj.display();
    obj.print();
}
