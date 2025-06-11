#include <iostream>
using namespace std;
int findMaxDigitLoop(int n) {
    int maxDigit = 0;
    while (n > 0) {
        maxDigit = std::max(maxDigit, n % 10);
        n /= 10;
    }
    return maxDigit;
}

int findMaxDigitRec(int n) {
    if (n < 10) return n;
    return max(n % 10, findMaxDigitRec(n / 10));
}