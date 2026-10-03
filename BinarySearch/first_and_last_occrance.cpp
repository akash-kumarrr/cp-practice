#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> v;
    for (int k = 0; k < n; k++) {
        int val;
        cin >> val;
        v.push_back(val);
    }

    int target;
    cout << "enter the target : ";
    cin >> target;

    int i = 0, j = n - 1;
    int l = -1, u = -1; // Default to -1 if target is not found

    while (i <= j) {
        int mid = i + (j - i) / 2;

        if (v[mid] == target) {
            l = mid;
            u = mid;

            // Expand left safely without overshooting
            while (l > 0 && v[l - 1] == target) {
                l--;
            }

            // Expand right safely using original size 'n'
            while (u < n - 1 && v[u + 1] == target) {
                u++;
            }

            break; // Stop binary search once range is found
        } 
        else if (v[mid] > target) {
            j = mid - 1;
        } 
        else {
            i = mid + 1;
        }
    }

    if (l != -1) {
        cout << "First: " << l << " Last: " << u << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}