#include <bits/stdc++.h>
#define lp(i, a,b) for (int i=a; i<b; i++)

using namespace std;

typedef vector<int> vi;

int  main() {
    int a;
    vi arr;
    while (cin >> a) arr.push_back(a);
    int largest = arr[0];
    int sec_largest = arr[0];
    lp(i, 0, arr.size()) {
        if (arr[i] > largest) {
            sec_largest = largest;
            largest = arr[i];
        }
    }
    cout << sec_largest << endl;
}