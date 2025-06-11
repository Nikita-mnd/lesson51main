#include <iostream>
using namespace std;

bool isPowerRec(int n, int base);
bool isPowerLoop(int n, int base);

int main() {
    int num, base;
    cout << "Enter the number and the base of the degree: ";
    cin >> num >> base;
    cout <<"isPowerLoop:" << (isPowerLoop(num, base) ?
        "Yes, this is a degree" : "No") << endl;
    cout << "isPowerRec: " << (isPowerRec(num, base) ?
        "Yes, this is a degree" : "No") << endl;
    return 0;
}

