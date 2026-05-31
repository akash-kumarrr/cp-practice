// for fib(x) = fib(x-1) + fib(x-2)

#include <bits/stdc++.h>

using namespace std;

void fibb(int n, int a, int b) {
    if (n == 0) return;
    cout << a << " ";
    fibb(n-1, b, a+b);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;
    fibb(n, 0, 1);
    return 0;
}