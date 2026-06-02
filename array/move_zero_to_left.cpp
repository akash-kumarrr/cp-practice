#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
    vi arr;
    int a;
    while (cin >> a) arr.push_back(a);
    int i=0, j=arr.size()-1;
    while (i<j){
        if (arr[j]!=0){
            if (arr[i] == 0) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
                j--;
            }
            i++;
        }
        if (arr[j] == 0) j--;
        for (auto i : arr ) cout << i << " "; cout << endl;
    }
}