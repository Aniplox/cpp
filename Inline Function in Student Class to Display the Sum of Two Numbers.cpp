#include <iostream>
using namespace std;

class Student {
public:
    inline void sum(int a, int b) {
        cout << "Sum: " << a + b << endl;
    }
};

int main() {
    Student s;
    s.sum(10, 20);
    return 0;
}
