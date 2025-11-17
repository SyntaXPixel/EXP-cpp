#include <iostream>

using namespace std;

int main() {
    // a) for loop
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // b) while loop
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // c) do-while loop
    // Executes the loop body at least once.
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);
    cout << endl;

    return 0;
}
