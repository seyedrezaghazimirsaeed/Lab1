#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask user for input
    cout << "Enter an integer: ";
    cin >> number;

    int reversed = 0;

    // Use for loop to reverse digits
    for (; number != 0; number /= 10) {
        int digit = number % 10;           // Get the last digit
        reversed = reversed * 10 + digit;  // Add digit to the reversed number
    }

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
