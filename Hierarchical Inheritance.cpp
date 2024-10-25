#include <iostream>
using namespace std;

class Base {
public:
    int num1, num2;
    Base() {
        num1 = 5;
        num2 = 10;
    }
};

class Derived1 : public Base {
public:
    void displayNum1() {
        cout << "First number: " << num1 << endl;
    }
};

class Derived2 : public Base {
public:
    void displayNum2() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    Derived1 d1;
    Derived2 d2;
    d1.displayNum1();
    d2.displayNum2();
    return 0;
}
