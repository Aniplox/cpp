#include <iostream>

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
    std::cout << "Enter a natural number: ";
    std::cin >> number;
    nn.setN(number);

    std::cout << "The sum of the first " << number << " natural numbers is: " << nn.sum() << std::endl;

    return 0;
}
