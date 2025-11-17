#include <iostream>

using namespace std;

int main() {
    // a) if-else statement
    // Used to execute code blocks based on conditions.
    int x = 10;
    if (x > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Negative" << endl;
    }

    // b) switch-case statement
    // Used for multiple selections based on the value of an expression.
    int choice = 2;
    switch (choice) {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        default:
            cout << "Invalid" << endl;
            break;
    }

    return 0;
}
