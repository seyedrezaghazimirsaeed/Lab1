#include <iostream>
using namespace std;

// Define macro for maximum number
#define MAX_NUM 50

int main() {
    // Use unsigned int because we are counting positive numbers
    for (unsigned int i = 2; i <= MAX_NUM; i += 2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
