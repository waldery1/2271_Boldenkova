#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
    }

    bool found = false;
    for (int num : a) {
        if (num < 0) {
            cout << "Found negative number: " << num << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "All numbers are non-negative" << endl;
    }

    return 0;
}