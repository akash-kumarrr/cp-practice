#include <bits/stdc++.h>

#define lp(i, a, b) for(int i=a; i<b; i++)

using namespace std;

typedef vector<int> vi;

vi arr;

int main() {
    int a, n;
    cin >> n;
    lp(i,0,n){
        cin >> a;
        arr.push_back(a);
    }
    int q=1;
    while (q<arr.size()){
        if (arr[q-1] == arr[q]){
            q+=2;
        }
        else if (arr[q-1] != arr[q]){
            cout << arr[q-1] << " ";
            q+=1;
        }
    }
}