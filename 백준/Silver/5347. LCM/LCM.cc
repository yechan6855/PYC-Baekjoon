#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--) {
        long long a,b;
        cin>>a>>b;
        cout<<lcm(a,b)<<"\n";
    }
}