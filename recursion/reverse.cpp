#include <bits/stdc++.h>

using namespace std;

void recursive_reverse(int i, int j, int* arr){
    if (i>j) return;
    int temp = *(arr+i);
    *(arr+i) = *(arr+j);
    *(arr+j) = temp;

    recursive_reverse(i+1, j-1, arr);
}

int main(){
    int n, m, a;
    if (!(cin >> n) || !n) return 0;
    m=n;
    int arr[n];


    for(int i=0; i<n; i++){
        cin >> a;
        *(arr+i) = a;
    }

    recursive_reverse(0, n-1, arr);

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;

}