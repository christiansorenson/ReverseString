#include <iostream>
using namespace std;

void RevStrSwap(string &str);

int main() {
    string str;
    cout << "Enter string to be reversed: " << endl;
    getline(cin, str);
    RevStrSwap(str);
    cout << str << endl;
    return 0;
}

// reverses string by swapping endpoints until it reaches the center
void RevStrSwap(string &str) {
    int n = str.length();
    // swap ends of string until at the center element
    for (int i = 0; i < n/2; i++) {
        swap(str[i], str[n-i-1]);
    }
}
