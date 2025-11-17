#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Binary operator overloading: +
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Unary operator overloading: -
    Complex operator-() {
        return Complex(-real, -imag);
    }

    // Function overloading: display
    void display() {
        cout << "Complex: " << real << " + " << imag << "i" << endl;
    }

    void display(string msg) {
        cout << msg << ": " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.0, 4.0), c2(1.0, 2.0);
    Complex sum = c1 + c2;  // Binary +
    Complex neg = -c1;      // Unary -

    c1.display();          
    sum.display("Sum");     
    neg.display("Negative"); 

    return 0;
}
