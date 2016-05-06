#include<bits/stdc++.h>
using namespace std;
int n, m, k;
struct node{
    int a, b;
}no[25];
bool chk(const int& ty, const int& ma){
    int M = 0, K = 0;
    for(int i = 1, cnt = 0; i < ma && K <= k; i <<= 1, cnt++){
        if(i & ty){
            M += no[cnt].a;
            K += no[cnt].b;
        }
    }
    if(K > k || M < m)return 0;
    return 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        for(int i = 0; i < n; i++)cin >> no[i].a >> no[i].b;
        int ans = 0, ma = 1 << n;
        for(int ty = 1; ty < ma; ty++)if(chk(ty, ma))ans++;
        cout << ans << endl;
    }
}
