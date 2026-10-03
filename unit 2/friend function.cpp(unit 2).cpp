//program to illustrate friend function
#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    void setValue(int n) {
        num = n;
    }
    friend void display(Number obj);
};

void display(Number obj) {
    cout << "Value = " << obj.num << endl;
}

int main() {
    Number obj;
    obj.setValue(100);
    display(obj);

    return 0;
}
