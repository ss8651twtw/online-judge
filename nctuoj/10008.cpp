#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0;
        cin >> n;
        int a[n + 5];
        for(int i = n; i > 0; i--)cin >> a[i];
        for(int i = 2; i <= n; i++)ans = (ans + a[i]) % i;
        if(ans < 0)ans += n;
        cout << ans + 1 << endl;
    }
}