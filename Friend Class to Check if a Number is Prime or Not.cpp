#include <iostream>
using namespace std;

class CheckPrime {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;
        return true;
    }
};

class Number {
    
public:
    int n;
    Number(int val) : n(val) {}
    friend class CheckPrime;
};

int main() {
    Number num(29);
    CheckPrime primeChecker;
    if (primeChecker.isPrime(num.n))
        cout << "Prime number" << endl;
    else
        cout << "Not a prime number" << endl;
    return 0;
}
