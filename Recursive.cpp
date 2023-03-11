#include <iostream>
using namespace std;

void RevStrRecursive(string &str, int i);

int main() {
    string str;
    cout << "Enter string to be reversed: " << endl;
    getline(cin, str);
    RevStrRecursive(str, 0);
    cout << str << endl;
    return 0;
}

// recursively swaps ends of string until at the center
// takes the string and current iteration of the function as parameters
void RevStrRecursive(string &str, int i) {
    int n = str.length();
    if (i >= n/2)
        return;
    swap(str[i], str[n-i-1]);
    RevStrRecursive(str, i+1);
}
