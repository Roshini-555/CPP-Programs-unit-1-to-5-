//Find the roots of a qudratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Declare variables for coefficients
    double a, b, c;

    // Input coefficients
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Check if it is a quadratic equation
    if (a == 0) {
        cout << "Not a quadratic equation.";
        return 0;
    }

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    // Declare variables for roots
    double root1, root2;
    double realPart, imaginaryPart;

    // Check if roots are real and different
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    // Check if roots are real and equal
    else if (discriminant == 0) {
        root1 = -b / (2 * a);

        cout << "Roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }

    // Check if roots are complex
    else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Roots are complex." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
