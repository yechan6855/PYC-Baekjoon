#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    long long ans = 0;
    
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        ans += a;
    }

    cout << ans - (n-1) << "\n";
    
    return 0;
}