#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
LL n, a, b, my[100005];
bool chk(const LL& ti){
    LL base = b * ti, attack = a - b, ans = 0;
    for(int i = 0; i < n && my[i] > base; i++){
        ans += (my[i] - base + attack - 1) / attack;
        if(ans > ti)return 0;
    }
    return 1;
}
bool cmp(const LL& a, const LL& b){
    return a > b;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        for(int i = 0; i < n; i++)cin >> my[i];
        sort(my, my + n, cmp);
        LL l = 1, r = my[0] + 1;
        while(l < r){
            LL mid = (l + r)/2;
            if(chk(mid))r = mid;
            else l = mid + 1;
        }
        cout << l << endl;
    }
}
