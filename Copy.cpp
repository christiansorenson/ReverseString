#include <iostream>
using namespace std;

void RevStrCopy(string &str);

int main() {
    string str;
    cout << "Enter string to be reversed: " << endl;
    getline(cin, str);
    RevStrCopy(str);
    cout << str << endl;
    return 0;
}

// reverse string by iterating backwards through a copy of the string
void RevStrCopy(string &str) {
    int n = str.length();
    string temp = str;
    for (int i = temp.length()-1; i >= 0; i--) {
        str[n-i-1] = temp[i];
    }
}
