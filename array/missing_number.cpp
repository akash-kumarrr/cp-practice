#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi arr;

int main() {
    int e, n;
    cin >> n;
    for (int i=0; i<n-1; i++) {
        cin >> e;
        arr.push_back(e);
    }

    int sum = 0;
    for (int i : arr) sum+=i;

    int total_sum = (n*(n+1))/2;
    cout << total_sum - sum << endl;
}