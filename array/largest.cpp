#include <bits/stdc++.h>
#define lp(i, a, b) for(int i=a; i<b; i++)

using namespace std;

int arr[(int)1e5];

int main() {
    int a, i=0;
    while(cin >> a) {
        arr[i] = a;
        i+=1;
    }
    int largest = arr[0];
    lp(i, 0, sizeof(arr)/sizeof(arr[0])) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << largest << endl;
    return 0;
}