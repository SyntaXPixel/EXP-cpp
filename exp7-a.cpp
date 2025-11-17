#include <iostream>
using namespace std;

class Number {
private:
    int value;
public:
    Number(int v) {
      value = v;
    }

    // Binary operator overloading: +
    Number operator+(const Number& other) {
        return Number(value + other.value);
    }

    // Unary operator overloading: -
    Number operator-() {
        return Number(-value);
    }

    // Function overloading: display
    void display() {
        cout << "Value: " << value << endl;
    }

    void display(string msg) {
        cout << msg << ": " << value << endl;
    }
};

int main() {
    Number n1(5), n2(3);
    Number sum = n1 + n2;  // Binary +
    Number neg = -n1;      // Unary -

  // Function overloading: no param
    n1.display();
    n2.display();

  // Function overloading: with param
    sum.display("Sum");     
    neg.display("Negative");

    return 0;
}
