#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        LL n, r, ans = 0;
        cin >> n >> r;
        LL tmp;
        vector<LL> v;
        v.push_back(LLONG_MIN);
        v.push_back(LLONG_MAX);
        while(n--){
            cin >> tmp;
            vector<LL>::iterator itr = lower_bound(v.begin(), v.end(), tmp);
            if(*itr != tmp)
                if(*(itr - 1) + 2 * r < tmp){
                    v.insert(itr, tmp - r);
                    ans++;
                }
        }
        cout << ans << endl;
    }
}
