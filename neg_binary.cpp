#include <bits/stdc++.h>
using namespace std;

void printBinary(int num) {
    if (num == 0) {
        cout << "Binary: 0"; 
        return;
    }

    int size = sizeof(num) * 8;  // Number of bits in the integer type
    bool isLeadingOne = false;

    for (int i = size-1 ; i >= 0; --i) {
        int bit = (num >> i) & 1;

        if (bit == 1)
            isLeadingOne = true;
        

        if (isLeadingOne)
            cout << bit;
    }
}

int main() {
    int number;

    cout << "Enter a negative number: ";
    cin >> number;

    cout << "Negative number: " << number << endl;
    printBinary(number);

}

