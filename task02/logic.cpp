#include <iostream>
using namespace std;

bool isPowerRec(int n, int base) {
    if (n == 1) return true;
    if (n < 1 || n % base != 0) return false;
    return isPowerRec(n / base, base);
}


bool isPowerLoop(int n, int base) {
    if (n < 1) return false;
    while (n > 1) {
        if (n % base != 0) return false;
        n /= base;
    }
    return true;
}
