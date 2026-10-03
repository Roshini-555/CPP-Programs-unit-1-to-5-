//Find factorial of a given number using recursion
#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n) {

    // Base case
    if (n == 0 || n == 1)
        return 1;

    // Recursive case
    return n * factorial(n - 1);
}

int main() {

    // Declare variable
    int n;

    // Input number
    cout << "Enter a number: ";
    cin >> n;

    // Check if the number is negative
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers.";
    }
    else {

        // Calculate factorial using recursion
        long long result = factorial(n);

        // Display the result
        cout << "Factorial of " << n << " = " << result;
    }

    return 0;
}
