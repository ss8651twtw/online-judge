#include <bits/stdc++.h>
#define REP(x, y, z) for(int x = y; x <= z; x++)
using namespace std;
int n, m, mymap[100][100], ans = 1000000;
void bfs(int i, int j, int step){
    if(mymap[i][j] || i < 1 || i > n || j < 1 || j > m)return;
    if(i == n && j == m){
        ans = min(ans, step);
        return;
    }
    mymap[i][j] = 1;
    bfs(i + 1, j, step + 1);
    bfs(i - 1, j, step + 1);
    bfs(i, j + 1, step + 1);
    bfs(i, j - 1, step + 1);
    mymap[i][j] = 0;
}
int main(){
    scanf("%d%d", &n, &m);
    REP(i, 0, 99)REP(j, 0, 99)mymap[i][j] = 1;
    REP(i, 1, n)REP(j, 1, m)scanf("%d", &mymap[i][j]);
    bfs(1, 1, 0);
    ans == 1000000 ? puts("0") : printf("%d\n", ans);
}
