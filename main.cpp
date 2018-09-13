#include <iostream>
#include "gcd.h"



int main() {
    int n = gcd(25,10);
    std::cout << "Hello, Clion!   hello" << std::endl;
    std::cout << n << std::endl;
    return 0;
}

int gcd(const int a, const int b) {
    if (a == b) {
        return a;
    }
    if (a > b) {
        return gcd((a - b), b);
    } else {
        return gcd(a, (b - a));
    }
}