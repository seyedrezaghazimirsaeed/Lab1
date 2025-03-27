#include <iostream>
#include <string>
using namespace std;

// Namespace for math operations
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

// Namespace for text operations
namespace TextOperations {
    string concat(string a, string b) {
        return a + b;
    }
}

int main() {
    // Using the add function
    int x = 5;
    int y = 7;
    int result1 = MathOperations::add(x, y);
    cout << "Sum of two numbers: " << result1 << endl;

    // Using the concat function
    string text1 = "Hello ";
    string text2 = "Tuan";
    string result2 = TextOperations::concat(text1, text2);
    cout << "Concatenated text: " << result2 << endl;

    return 0;
}
