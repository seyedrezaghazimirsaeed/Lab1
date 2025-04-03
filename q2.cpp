#include <iostream>
#include <string>
#include <algorithm> // for transform and reverse
using namespace std;

int main() {
    string input;

    // Ask the user to enter a string
    cout << "Enter a string: ";
    getline(cin, input); // to allow spaces in the input

    // 1. Convert string to uppercase
    string upperStr = input;
    transform(upperStr.begin(), upperStr.end(), upperStr.begin(), ::toupper);
    cout << "Uppercase: " << upperStr << endl;

    // 2. Count the number of vowels
    int vowelCount = 0;
    for (char c : input) {
        char lower = tolower(c); // make case-insensitive
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            vowelCount++;
        }
    }
    cout << "Number of vowels: " << vowelCount << endl;

    // 3. Reverse the string
    string reversedStr = input;
    reverse(reversedStr.begin(), reversedStr.end());
    cout << "Reversed: " << reversedStr << endl;

    return 0;
}
