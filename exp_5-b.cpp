#include <iostream>
#include <string>

using namespace std;

class Demo {
private:
    string name;
    int value;

public:

    Demo() {
        name = "Default constructor";
        value = 0;
        cout << "\n" << name << " called with value: " << value << endl;
    }

    Demo(int v) {
        name = "Parameterized constructor";
        value = v;
        cout << name << " called with value: " << value << endl;
    }

    Demo(const Demo& other) {
        name = other.name;
        value = other.value;
        cout << "Copy constructor called for name: " << name << ", value: " << value << endl;
    }

    void display() {
        cout << "Name: " << name << ", Value: " << value << endl;
    }
};

int main() {

    Demo d1;  
    Demo d2(10);
    Demo d3 = d2; 

    cout << "\nDisplaying objects:" << endl;
    d1.display();
    d2.display();
    d3.display();

     return 0;
}
