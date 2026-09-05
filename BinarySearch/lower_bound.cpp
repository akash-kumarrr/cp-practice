#include <bits/stdc++.h>

using namespace std;

#define le(i, e) for (int i=0;i <e; i++) 

int main(){
    int i, j, k, n;
    int ans;
    if(!(cin >> n)) return 0;
    int arr[n];
    le(i, n) cin >> *(arr+i) ;
    if (!(cin >> k)) return 0;
    i=0, j=n-1;

    while (i<=j) {
        int mid = (i+j)/2;
        if(*(arr+mid) >= k){
            ans = mid;
            j=mid-1;
        }
        else {
            i=mid+1;
        }
    }
    cout << ans;
}