#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor called" << endl;
    }
    ~Base1() {
        cout << "Base1 destructor called \n" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor called" << endl;
    }
    ~Base2() {
        cout << "Base2 destructor called" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Derived constructor called \n" << endl;
    }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    cout << "Creating object of Derived class: " << endl;
    Derived obj;
    cout << "Object created. Now destroying it:" << endl;
    return 0;
}
