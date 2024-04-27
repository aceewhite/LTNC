#include <bits/stdc++.h>
#include <string>

using namespace std;

void generateStrings(const string& characters, string current, int length) {
    if (length == 0) {
        cout << current << endl;
        return;
    }

    for (char c : characters) {
        generateStrings(characters, current + c, length - 1);
    }
}

int main() {
    string characters = "abcd";
    int length = 3;
    generateStrings(characters, "", length);
    return 0;
}

