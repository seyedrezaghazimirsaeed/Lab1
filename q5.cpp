#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user to enter a number
    cout << "Enter an integer: ";
    cin >> number;

    int sum = 0;

    // Use for loop to calculate sum of digits
    for (; number != 0; number /= 10) {
        int digit = number % 10;  // get the last digit
        sum += digit;             // add it to sum
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
