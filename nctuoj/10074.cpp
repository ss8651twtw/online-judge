#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0, cnt = 0, par[100005];
struct edge{
    int u, v, w;
    edge(){}
    edge(int _u, int _v, int _w){
        u = _u;
        v = _v;
        w = _w;
    }
    bool operator<(const edge& x)const{
        return w < x.w;
    }
};
int find(int x){
    return x == par[x] ? x : (par[x] = find(par[x]));
}
void uni(int a, int b){
    par[find(b)] = find(a);
}
int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)par[i] = i;
    edge e[m];
    for(int i = 0; i < m; i++){
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        e[i] = edge(u,v,w);
    }
    sort(e, e + m);
    //for(int i = 0; i < m; i++)printf("%d %d %d\n", e[i].u, e[i].v, e[i].w);
    for(int i = 0; i < m && cnt < n; i++){
        int a = find(e[i].u), b = find(e[i].v);
        if(a != b){
            uni(a, b);
            ans += e[i].w;
            cnt++;
        }
    }
    printf("%d\n", cnt == n - 1 ? ans : -1);
}