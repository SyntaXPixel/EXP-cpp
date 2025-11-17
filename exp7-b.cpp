#include <iostream>
using namespace std;

class Box {
private:
    int length, width;
public:
    Box(int l, int w) {
        lenght = l;
        width = w;
    }

    friend void displayArea(Box b);  // Friend function
    friend class BoxHelper;          // Friend class
};

void displayArea(Box var) {
    cout << "Area: " << var.length * var.width << endl;
}

class BoxValue {
public:
    void showDimensions(Box var) {
        cout << "Length: " << var.length << ", Width: " << var.width << endl;
    }
};

int main() {
    Box b(10, 5);
    displayArea(b);  // Using friend function
    BoxValue value;
    value.showDimensions(b);  // Using friend class
    return 0;
}
