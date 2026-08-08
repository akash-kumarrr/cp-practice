#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n) || n < 1) {
        return 0;
    }

    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int largest = INT_MIN;
    int sec_largest = INT_MIN;

    for (int val : numbers) {
        if (val > largest) {
            sec_largest = largest;
            largest = val;
        } else if (val > sec_largest && val != largest) {
            sec_largest = val;
        }
    }

    cout << "Largest: " << largest << "\n";
    if (sec_largest != INT_MIN) {
        cout << "Second Largest: " << sec_largest << "\n";
    } else {
        cout << "Second Largest: Does not exist\n";
    }

    return 0;
}