//Illustrate the use of default argumemts and access specifiers
#include <iostream>
using namespace std;

/* // Function with default arguments
void display(int a = 10, int b = 20) {

    // Display the values
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main() {

    // Call function without arguments
    cout << "Function call without arguments:" << endl;
    display();

    cout << endl;

    // Call function with one argument
    cout << "Function call with one argument:" << endl;
    display(50);

    cout << endl;

    // Call function with two arguments
    cout << "Function call with two arguments:" << endl;
    display(100, 200);

    return 0;
}*/
/*
#include <iostream>
#include <string>
using namespace std;

// Function with default arguments
void greet(string name = "Student", string message = "Welcome to C++ Programming") {

    // Display greeting message
    cout << "Hello, " << name << "!" << endl;
    cout << message << endl;
}

int main() {

    // Call function without arguments
    cout << "Function call without arguments:" << endl;
    greet();

    cout << endl;

    // Call function with one argument
    cout << "Function call with one argument:" << endl;
    greet("Roshini");

    cout << endl;

    // Call function with two arguments
    cout << "Function call with two arguments:" << endl;
    greet("Roshini", "Good Morning!");

    return 0;
}
//program
/*
//Access specifiers
#include<iostream>
using namespace std;
class Myclass {
	public:
		int PublicVar;
	private:
		int PrivateVar;
	protected:
		int ProtectedVar;
	public:
		void setPrivateVar(int Val){
			PrivateVar = Val;
		}
		int getprivateVar(){
			return PrivateVar;
		}
		
};
int main()
{
	Myclass obj;
	obj.PublicVar = 10;
	//obj.PrivateVar = 20; //Error
	obj.setPrivateVar(20);
	 
}
*/



