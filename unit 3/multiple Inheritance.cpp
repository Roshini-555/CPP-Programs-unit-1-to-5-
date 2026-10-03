//Multiple Inheritance
#include<iostream>
using namespace std;
class Father
{
public:
    void father()
    {
        cout << "This is Father" << endl;
    }
};
class Mother
{
public:
    void mother()
    {
        cout << "This is Mother" << endl;
    }
};
class Child : public Father, public Mother
{
public:
    void child()
    {
        cout << "This is Child" << endl;
    }
};
int main()
{
    Child c;
    c.father();
    c.mother();
    c.child();
    return 0;
}
