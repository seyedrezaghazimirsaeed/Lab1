#include <iostream>
using namespace std;

// Define a macro to calculate square of a number
#define SQUARE(x) ((x) * (x))

int main() {
    int num;

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> num;

    // Use the macro to calculate the square
    int result = SQUARE(num);
    cout << "Square is: " << result << endl;

    return 0;
}
