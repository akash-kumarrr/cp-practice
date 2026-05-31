#include <bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++)


using namespace std;

int main() {
    int a;
    if (!(cin >> a)) return 0;
    int original = a;
    int sum = 0;
    loop(i, 0, (int) log10(a)+1) {
        int last_digit = a%10;
        sum += pow(last_digit, 3);
        a /= 10;
    }
    cout << (sum==original ? true : false) << endl;
    return 0;
}