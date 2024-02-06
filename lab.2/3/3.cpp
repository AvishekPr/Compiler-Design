#include <iostream>
#include <string>

using namespace std;

bool isComment(string input) {

    input = input.substr(input.find_first_not_of(" \t"));
    input = input.substr(0, input.find_last_not_of(" \t") + 1);


    if (input.find("//") == 0) {
        return true;
    }

    if (input.find("/*") == 0 && input.find("*/") == input.length() - 2) {
        return true;
    }

    return false;
}

int main() {
    string input;
    cout << "Enter input: ";
    getline(cin, input);
    if (isComment(input)) {
        cout << "Comment" << endl;
    } else {
        cout << "Not a comment" << endl;
    }
    return 0;


}
