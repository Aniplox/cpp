#include <iostream>
using namespace std;

class Base {
public:
    int num1;
    Base() {
        num1 = 10;
    }
};

class Derived1 : public Base {
public:
    int num2;
    Derived1() {
        num2 = 20;
    }
};

class Derived2 : public Derived1 {
public:
    void sum() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    Derived2 obj;
    obj.sum();
    return 0;
}
