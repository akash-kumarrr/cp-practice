#include <bits/stdc++.h>

using namespace std;

void recursion(int n) {
    if (!n) return ;
    cout << "hi ";
    recursion(n-1);
}

int main() {
    int n;
    if(!(cin >> n)) return 0;
    recursion(n);
}