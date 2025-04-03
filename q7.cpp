#include <iostream>
#include <string>
using namespace std;

// Define macro for minimum password length
#define MIN_LENGTH 8

int main() {
    string password;

    // Ask user to enter password
    cout << "Enter password: ";
    getline(cin, password);

    // Initialize flags
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    string specialChars = "!@#$%^&*";

    // Check each character in the password
    for (char c : password) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (specialChars.find(c) != string::npos) hasSpecial = true;
    }

    // Check all conditions
    bool isStrong = true;

    if (password.length() < MIN_LENGTH) {
        cout << "- Password is too short (minimum " << MIN_LENGTH << " characters)" << endl;
        isStrong = false;
    }
    if (!hasUpper) {
        cout << "- Missing uppercase letter" << endl;
        isStrong = false;
    }
    if (!hasLower) {
        cout << "- Missing lowercase letter" << endl;
        isStrong = false;
    }
    if (!hasDigit) {
        cout << "- Missing digit" << endl;
        isStrong = false;
    }
    if (!hasSpecial) {
        cout << "- Missing special character (!@#$%^&*)" << endl;
        isStrong = false;
    }

    if (isStrong) {
        cout << "Strong Password 💪" << endl;
    } else {
        cout << "Weak Password ❌" << endl;
    }

    return 0;
}
