//Implement scope and resolution and namespace
#include <iostream>

// Global variable
int var = 100;

// Create a namespace
namespace Demo {
    int var = 200;
}

int main() {

    // Declare local variable
    int var = 10;

    // Display local variable
    std::cout << "Local var = " << var << std::endl;

    // Display global variable using scope resolution operator
    std::cout << "Global var = " << ::var << std::endl;

    // Display namespace variable using namespace scope resolution
    std::cout << "Namespace var = " << Demo::var << std::endl;

    return 0;
}
