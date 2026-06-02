#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define lp(i, a, b) for (int i=a; i<b; i++)

int main() {
    int a, n;
    int count=0, maxcount = 0;
    vi arr;
    cin >> n;
    lp(i, 0, n) {
        cin >> a;
        arr.push_back(a);
    }
    lp(i, 0, n){
        if (arr[i] == 1) {
            count += 1;
        }
        if (arr[i] != 1) {
            if (count > maxcount){
                maxcount = count;
            }
            count = 0;
        }
    }
    cout << maxcount;
}