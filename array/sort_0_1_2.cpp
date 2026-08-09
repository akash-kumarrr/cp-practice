#include <bits/stdc++.h>

using namespace std;
#define _(i, e) for(int i=0; i<e; i++)
#define pb push_back

typedef vector<int> vi;


int main() {
	int a, b, c, x, y;
	if (!(cin>>c) || !c) return 0;
	vi v;
	while(c--) {
		if(!(cin>>a) || !(a<3)) return 0;
		v.pb(a);
	}
	for(int i=0; i<v.size()-1; i++){
		int x=i+1;
		while(v[i]<v[x] && x<v.size()){
			x++;
		}
		if (v[i]>v[x]) {
			int t = v[i];
			v[i] = v[x];
			v[x] = t;
		}
	}

	for(const auto& i : v){
		cout << i << " " ;
	}
	cout << endl;
	return 0;
}
