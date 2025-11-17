#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class method" << endl;
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class method" << endl;
    }
};

int main() {
    Derived1 d;
    d.showBase();     // Inherited from Base
    d.showDerived1(); 
    return 0;
}
