//program to illustrate the use of Constructors and Destructors
#include <iostream>
using namespace std;

class Student {

private:
    string name;

public:
    Student(string n) {
        name = n;
        cout << "Constructor called." << endl;
    }
    void display() {
        cout << "Student Name = " << name << endl;
    }

    ~Student() {
        cout << "Destructor called." << endl;
    }
};

int main() {

    Student obj("Roshini");
    obj.display();

    return 0;
}
