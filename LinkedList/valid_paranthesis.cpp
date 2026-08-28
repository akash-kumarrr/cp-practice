#include <bits/stdc++.h>

using namespace std;

int top = -1;

int main(){
    string str;
    cin >> str;

    char s[str.length()];

    for (int i=0; i<str.length(); i++){
        if (str[i] == '(') s[++top] = str[i];
        else if (str[i] == ')') {
            if (!(top == -1)) {
                if (s[top] == '(') top--;
                else {
                    cout << "Invalid" << endl;
                    return 0;
                }
            }
        }
    }
    cout << (top == -1 ? "Valid" : "Invalid") << endl;
}