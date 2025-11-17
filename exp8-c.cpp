#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A method" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B method" << endl;
    }
};

class C : public B {
public:
    void showC() {
        cout << "Class C method" << endl;
    }
};

int main() {
    C c;
    c.showA();
    c.showB(); 
    c.showC(); 
    return 0;
}
