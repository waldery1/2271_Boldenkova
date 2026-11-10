#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int &x : v) {
        cin >> x;
    }

    int last = v[n - 1];

    for (int &x : v) {
        x += last;
    }

    int pos = 0;
    int neg = 0;

    for (int x : v) {
        if (x > 0) pos++;
        if (x < 0) neg++;
    }

    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}