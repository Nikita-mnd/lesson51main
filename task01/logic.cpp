#include <iostream>
using namespace std;
int sumDigitsLoop(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int sumDigitsRec(int n) {
    return (n == 0) ? 0 : (n % 10 + sumDigitsRec(n / 10));
}
