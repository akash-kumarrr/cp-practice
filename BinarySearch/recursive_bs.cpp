#include <bits/stdc++.h>

using namespace std;

bool recursive_bs(int i, int j, int* arr, int k) {
    if (i>j) return false;
    int mid = (int) (i+j)/2;
    if (*(arr+mid) == k){
        return true;
    }
    else if (*(arr+mid) > k) {
        return recursive_bs(i, mid-1, arr, k);
    }
    else {
        return recursive_bs(mid+1, j, arr, k);
    }
    return false;
}

int main(){
    int i , j, k, n;
    if(!(cin >> n)) return 0;

    i=0;
    j=n-1;
    int arr[n];
    for (int i=0l; i<n; i++) {
        cin >> *(arr+i);
    }

    if (!(cin >> k)) return 0;
    cout << recursive_bs(i, j, arr, k);
}