#include <iostream>
using namespace std;

class A {
public:
    int a;
    A() {
        a = 10;
    }
};

class B : public A {};
class C : public A {};
class D : public A {};

class E : public B {
public:
    void display() {
        cout << "Value from class A: " << a << endl;
    }
};

int main() {
    E obj;
    obj.display();
    return 0;
}
