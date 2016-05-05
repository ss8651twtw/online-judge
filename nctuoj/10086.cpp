#include <bits/stdc++.h>
using namespace std;
inline int cnt(char pre, bool mov){
    if(mov){
        switch(pre){
            case 'E':return 0;
            case 'W':return 2;
            default:return 1;
        }
    }
    else{
        switch(pre){
            case 'N':return 0;
            case 'S':return 2;
            default:return 1;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        char my[105][105] = {0};
        int sea[105][105] = {0};
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++)
                cin >> my[i][j];
            cin.get();
        }
        for(int i = m; i > 0; i--){
            for(int j = 1; j <= n; j++){
                if(i == m && j == 1)sea[i][j] = 0;
                else if(i == m)sea[i][j] += sea[i][j - 1] + cnt(my[i][j - 1], 1);
                else if(j == 1)sea[i][j] += sea[i + 1][j] + cnt(my[i + 1][j], 0);
                else sea[i][j] += min(sea[i][j - 1] + cnt(my[i][j - 1], 1), sea[i + 1][j] + cnt(my[i + 1][j], 0));
            }
        }
        cout << sea[1][n] << endl;
    }
}
