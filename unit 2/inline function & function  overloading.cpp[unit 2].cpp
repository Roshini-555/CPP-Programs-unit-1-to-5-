//program to illustrate inline functions and function overloading

//program to illustrate inline function
#include <iostream>
using namespace std;
inline int square(int n) {
    return n * n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = square(num);
    cout << "Square of " << num << " = " << result << endl;
    return 0;
}


//Program to illustrate function overloading
#include <iostream>
using namespace std;
int add(int a, int b) {
	
    return a + b;
}
float add(float a, float b) { 

    return a + b;
}

/*
int main() {

    // Declare variables
    int x = 10, y = 20;
    float p = 5.5, q = 4.5;

    // Call integer function
    cout << "Sum of integers = " << add(x, y) << endl;

    // Call floating-point function
    cout << "Sum of floating-point numbers = " << add(p, q) << endl;

    return 0;
}
*/




