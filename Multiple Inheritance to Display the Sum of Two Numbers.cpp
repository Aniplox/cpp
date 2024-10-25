#include <iostream>
using namespace std;

class Base1 {
public:
    int num1;
    Base1() {
        num1 = 15;
    }
};

class Base2 {
public:
    int num2;
    Base2() {
        num2 = 25;
    }
};

class Derived : public Base1, public Base2 {
public:
    void sum() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};

int main() {
    Derived obj;
    obj.sum();
    return 0;
}
