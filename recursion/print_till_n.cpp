#include <bits/stdc++.h>

using namespace std;

void recursion(int n) {
    if (!n) return;
    cout << 8-n;
    recursion(n-1);
}

int main(){
    int n;

    if (!(cin >> n) || !n) return 0;
    recursion(n);
}