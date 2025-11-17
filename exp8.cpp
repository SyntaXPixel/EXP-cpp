#include <iostream>
#include <string>
using namespace std;

class A {
    public:
        string name = "class A";
};

class B {
    public:
        string name = "class B";
};

// Single 
class C : public A {
    public:
        string name = "class C";
};

// Multiple 
class D : public A, public B {
    public:
        string name = "class D";
};

// Multilevel 
class E : public C {
    public:
        string name = "class E";
};

// Hybrid 
class F : public E, public D {
    public:
        string name = "class F";
};

