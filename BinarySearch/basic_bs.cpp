#include <bits/stdc++.h>

using namespace std;

#define lse(i, s, e) for (int i=s; i<e; i++)

int main(){
	int a, n;
	if(!(cin >> n)) return 0;
	int arr[n];
	lse(i, 0, n) cin >> *(arr+i);

	int low=0, high=n-1;
	int mid ;
	if(!(cin >> a)) return 0;
	while(low <= high){
		mid = (int) (low+high)/2;
		if (*(arr+mid) == a) {
			cout << "found the key at " << mid << endl;
			return 0;
		}

		else  if (*(arr+mid) > a){
			high = mid-1;
		}
		else {
			low = mid+1;
		}
	}

	cout << "not found in the array" << endl ;
	return 0;
}
