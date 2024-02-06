#include <bits/stdc++.h>
using namespace std;

bool isNumericConstant(string input) {
    for (char c : input) {
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;
    if (isNumericConstant(input)) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }
    return 0;
}
