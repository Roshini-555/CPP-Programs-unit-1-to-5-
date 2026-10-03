//Illustrate the use of object as a class member , pointer to a class , this pointer and Virtual Base Class
//Object as a class member
#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;

    Person() {
        name = "Roshini";
    }
};

// Virtual Base Class
class Student : virtual public Person {
public:
    int marks;

    Student(int marks) {
        this->marks = marks;       // 3. this pointer
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Another class
class College : virtual public Person {
};

// 1. Object as a class member
class Result {
public:
    Student s;                     // Object of Student class

    Result() : s(90) {}

    void show() {
        s.display();
    }
};

int main() {

    // 1. Object as a class member
    Result r;
    r.show();

    // 2. Pointer to a class
    Student obj(80);
    Student *ptr = &obj;

    cout << "\nUsing Pointer:" << endl;
    ptr->display();

    return 0;
}
