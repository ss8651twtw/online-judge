#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m, ans = 0;
        cin >> n >> m;
        set<int> in;
        bool my[105][105] = {0};
        for(int i = 0; i < n; i++){
            int x, y;
            cin >> x >> y;
            in.insert(y);
            my[y][x] = 1;
        }
        for(auto &i : in){
            for(int j = 1; j < 101; j++){
                if(my[i][j]){
                    j += m - 1;
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
