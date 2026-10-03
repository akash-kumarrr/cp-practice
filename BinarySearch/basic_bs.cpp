#include <bits/stdc++.h>

#define le(i, e) for (int i=0; i<e; i++)
#define pb push_back



using namespace std;

typedef vector<int> vi;

int main(){
	vi v;
	int a, b, n;
	if(!(cin >> n) || n < 1) return 0;
	int j=n-1;
	while(n--) {
		if (!(cin >> a)) return 0;
		v.pb(a);
	}
	
	int i=0;
	bool search = false;

	cout << "enter the target : ";
	cin >> b;

	while(i<j) {
		int mid = (int) (i+j)/2;
		if (v[mid] == b) {
			search = true;
			break;
		}

		else {
			if (v[mid] < b){
				i=mid+1;
			}

			else {
				j=mid-1;
			}
		}
	}

	search ? cout << "found" : cout << "not found" ;
	cout << endl;
}