#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    nth_element(arr.begin(), arr.begin() + k - 1, arr.end());

    cout << arr[k-1] << '\n';

    return 0;
}