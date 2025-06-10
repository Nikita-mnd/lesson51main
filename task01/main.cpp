#include <iostream>
using namespace std;
int sumDigitsLoop(int n);
    int sumDigitsRec(int n);

int main() {
    int n;
    cout << "input number: ";
    cin >> n;
    cout << "sum of numbers(sumDigitsLoop): " << sumDigitsLoop(n) << endl;
    cout << "sum of numbers(sumDigitsRec): " << sumDigitsRec(n) << endl;
    return 0;
}