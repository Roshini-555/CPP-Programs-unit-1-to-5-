//Hybrid Inheritance
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
class C:public A
{
public:
    void print()
    {
        cout<<"\nClass C";
    }
};
class D:public B,public C
{
public:
    void result()
    {
        cout<<"\nClass D";
    }
};
int main()
{
    D obj;
    obj.display();
    obj.print();
    obj.result();
}
