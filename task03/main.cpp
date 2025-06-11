#include <iostream>
using namespace std;

int findMaxDigitLoop(int n);
int findMaxDigitRec(int n);

int main() {
    int num;
    cout << "Input number: ";
    cin >> num;
    cout << "Max number(findMaxDigitLoop): " <<
        findMaxDigitLoop(num) << endl;
    cout << "Max number(findMaxDigitRec): " <<
        findMaxDigitRec(num) << endl;
    return 0;
}
