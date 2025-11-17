#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Choose an exception to throw:" << endl;
        cout << "1. Integer exception" << endl;
        cout << "2. String exception" << endl;
        cout << "3. Double exception" << endl;
        cin >> choice;

        if (choice == 1) {
            throw 42;
        } else if (choice == 2) {
            throw string("String exception occurred");
        } else if (choice == 3) {
            throw 3.14;
        } else {
            cout << "No exception thrown." << endl;
        }
    } catch (...) {
        cout << "Generic exception handler: An exception was caught!" << endl;
    }

    return 0;
}
