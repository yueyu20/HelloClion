#include <iostream>

//Greatest Common Denominator
//PRE: a is a positive integer
//PRE: b is a positive integer
//POST: a and b are unchanged
//RETURN: the greatest common denominator of a and b.
int gcd(const int a, const int b);

int main() {
    int n = gcd(44,66);
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