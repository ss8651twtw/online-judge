#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, s, t;
        long long ans = 0;
        cin >> n >> s >> t;
        int a[n];
        for(int i = 0; i < n; i++)cin >> a[i];
        sort(a, a + n);
        for(int i = s - 1; i < t; i++)ans += a[i];
        cout << ans << endl;
    }
}