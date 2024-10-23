#include <iostream>
using namespace std;

class NaturalNumbers {
private:
    int n;

public:
    NaturalNumbers() : n(0) {}

    void setN(int num) {
        n = num;
    }

    int sum() {
        return (n * (n + 1)) / 2;
    }
};

int main() {
    NaturalNumbers nn;

    int number;
    cout << "Enter a natural number: ";
    cin >> number;
    nn.setN(number);

    cout << "The sum of the first " << number << " natural numbers is: " << nn.sum() << endl;

    return 0;
}
