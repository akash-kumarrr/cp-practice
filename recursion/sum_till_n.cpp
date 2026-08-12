#include <bits/stdc++.h>

using namespace std;

int sum = 0;

int recursive_sum(int n){
    if (!n) return 0;
    return n+recursive_sum(n-1);
}

int main(){
    int n;

    if(!(cin >> n) || !n) return 0;

    cout << recursive_sum(n);
}