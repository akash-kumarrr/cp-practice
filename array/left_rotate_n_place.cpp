#include <bits/stdc++.h>

using namespace std;

#define li(i, a, b) for(int i=a; i<b; i++)
#define ld(i, a, b) for(int i=a; i>b; i--)

typedef vector<int> vi;

int main(){
    int a, n, d;
    vi arr;
    cin >> n;
    cin >> d;
    if (d > n) d %= n;
    vi mem(d);
    li(i, 0, n) {
        cin >> a;
        arr.push_back(a);
    }
    li (i, 0, d){
        mem[i] = arr[i];
    }   
    int i=0, j=i+d;
    while (j<n) {
        arr[i] ^= arr[j];
        arr[j] ^= arr[i];
        arr[i] ^= arr[j];
        i++;
        j++;
    }
    while (d) {
        arr[n-1] = mem[d-1];
        n--;
        d--;
    }
    for (auto i : arr) cout << i << " ";
}