#include <iostream>
#include <stack>
using namespace std;

void RevStrStack(string &str);

int main() {
    string str;
    cout << "Enter string to be reversed: " << endl;
    getline(cin, str);
    RevStrStack(str);
    cout << str << endl;
    return 0;
}

// using a stack to reverse string
void RevStrStack(string &str) {
    stack<char> strStack;
    // stack elements of string
    for (char &itr : str)
        strStack.push(itr);
    // overwrite string with elements popped off stack
    for (char &itr : str) {
        itr = strStack.top();
        strStack.pop();
    }
}
