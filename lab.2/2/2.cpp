#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;

    int operatorIndex = 0;

    for (char c : input) {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=') {
            cout << "operator" << operatorIndex << ": " << c << endl;
            operatorIndex++;
        }
    }

    return 0;
}
