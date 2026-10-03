//program illustrating copy constructor

#include <iostream>
using namespace std;

class Student {

private:
    string name;
    int age;

public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    Student(const Student &obj) {
        name = obj.name;
        age = obj.age;
    }
    void display() {
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1("Roshini", 20);
    Student s2 = s1;
    cout << "First Object:" << endl;
    s1.display();
    cout << endl;
    cout << "Second Object:" << endl;
    s2.display();

    return 0;
}
