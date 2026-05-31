#include <bits/stdc++.h>
#define lp(i, a, b) for(int i=0; i < b; i++)

using namespace std;

int arr[(int)1e5];

int main() {
    int a;
    while (cin  >> a) {
        arr[a-1]++;
    }
    lp(i, 0, 10) {
        if (arr[i] > 0) {
            cout << i+1 << " : " << arr[i] << endl;
        }
    }
    return 0;
}