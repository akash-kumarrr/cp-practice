#include <bits/stdc++.h>

using namespace std;

void print(string name, int i, int a) {
    if (i >= a) return;
    cout << name << endl;
    print(name, i+1, a);
}

int main() {
    string name;
    if (!(cin  >> name)) return 0;
    print(name, 0, 5);
    return 0;
}

// #include <bits/stdc++.h>
// #define lp(i, a, b) for(int i = a; i < b; i++)

// using namespace std;

// void print(string name, int i) {
//     if (i <0 0) return;
//     cout << name << endl;
//     print(name, i-1);
// }

// int main() {
//     string name;
//     if (!(cin >> name)) return 0;
//     print(name, 5);
//     return 0;
// }