//program illustrating Constructor overloading
#include <iostream>
using namespace std;

class Student {

private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
    }
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Roshini", 20);
    cout << "Default Constructor:" << endl;
    s1.display();
    cout << endl;
    cout << "Parameterized Constructor:" << endl;
    s2.display();

    return 0;
}
