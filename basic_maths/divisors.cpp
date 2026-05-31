#include <bits/stdc++.h>
using namespace std;

#define lp(i, a, b) for(int i = a; i < b; i++)
int main() {
    vector<int> divisors;
    int a;
    if (!(cin >> a)) return 0;
    lp(i, 1, sqrt(a)+1) {
        if (a%i == 0) {
            divisors.push_back(i);
            if (i != a/i) {
                divisors.push_back(a/i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for (auto divisor : divisors) {
        cout << divisor << " ";
    }
    return 0;
}




// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int number;
//     if (!(cin >> number)) return 0;
//     int divisor = number;
//     while (divisor > 0) {
//         if (number % divisor == 0) {
//             cout << divisor << " ";
//         }
//         divisor--;
//     }
// }